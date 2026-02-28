package com.booking.recruitment.hotel.service.impl;

import com.booking.recruitment.hotel.exception.BadRequestException;
import com.booking.recruitment.hotel.exception.ElementNotFoundException;
import com.booking.recruitment.hotel.model.Hotel;
import com.booking.recruitment.hotel.repository.HotelRepository;
import com.booking.recruitment.hotel.service.HotelService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;
import java.util.stream.Collectors;

@Service
class DefaultHotelService implements HotelService {
  private final HotelRepository hotelRepository;

  @Autowired
  DefaultHotelService(HotelRepository hotelRepository) {
    this.hotelRepository = hotelRepository;
  }

  @Override
  public List<Hotel> getAllHotels() {
    return hotelRepository.findAll().stream()
        .filter(hotel -> !hotel.isDeleted())
        .collect(Collectors.toList());
  }

  @Override
  public List<Hotel> getHotelsByCity(Long cityId) {
    return hotelRepository.findAll().stream()
        .filter(hotel -> !hotel.isDeleted())
        .filter(hotel -> cityId.equals(hotel.getCity().getId()))
        .collect(Collectors.toList());
  }

  @Override
  public Hotel getHotelById(Long id) {
    Hotel hotel = hotelRepository
        .findById(id)
        .orElseThrow(() -> new ElementNotFoundException("Hotel not found with ID: " + id));

    if (hotel.isDeleted()) {
      throw new ElementNotFoundException("Hotel not found with ID: " + id);
    }

    return hotel;
  }

  @Override
  public Hotel createNewHotel(Hotel hotel) {
    if (hotel.getId() != null) {
      throw new BadRequestException("The ID must not be provided when creating a new Hotel");
    }

    return hotelRepository.save(hotel);
  }

  @Override
  public void deleteHotel(Long id) {
    Hotel hotel = hotelRepository
        .findById(id)
        .orElseThrow(() -> new ElementNotFoundException("Hotel not found with ID: " + id));

    hotel.setDeleted(true);
    hotelRepository.save(hotel);
  }
}

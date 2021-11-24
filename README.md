"# patatestravel" 


PatatesTravel - 6 yıldızlı hotel konforu, patates fiyatlarla.




Sınıflar -- 
    User --
    //parent Rental -- {fields -- rental_id, (city, district, street,building number)//address classı eklenebilir,description, name, price, capacity //type-(rental_id içine gömülebilir) hasWifi, hasPool, hasView, hasMinibar, hasHottub, hasPlayzone, area, rating}
    
    House: Rental -- {fields -- distanceToCityCentre}
    
    Room: House -- {fields -- hasPrivateBathroom, hasBalcony }
    
    Apartment: House -- {hasElevator, hasParkingLot}
    
    Villa: House -- {kitchenCount, bathCount, hasMiniTheater}
    Reservation -- {fields -- initialDate, finalDate, totalPrice, paymentMethod, numberOfCustomer, numberOfChild}

    //Address -- {fields -- city, district, street,building number}



//doluluk durumunu doğrudan dosyadan alinacak.
Dosyalar -- 



Dosya işlemleri -- 

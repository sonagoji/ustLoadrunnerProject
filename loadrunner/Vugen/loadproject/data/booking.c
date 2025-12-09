booking()
{

	lr_start_transaction("book");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_submit_data("BookHotel.php", 
		"Action=http://adactinhotelapp.com/BookHotel.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://adactinhotelapp.com/SelectHotel.php", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=radiobutton_0", "Value=0", ENDITEM, 
		"Name=total_radiobutton", "Value=1", ENDITEM, 
		"Name=hotel_name_0", "Value=Hotel Creek", ENDITEM, 
		"Name=location_0", "Value=Melbourne", ENDITEM, 
		"Name=rooms_0", "Value=1 Rooms", ENDITEM, 
		"Name=arr_date_0", "Value=09/12/2025", ENDITEM, 
		"Name=dep_date_0", "Value=10/12/2025", ENDITEM, 
		"Name=no_days_0", "Value=1 Days", ENDITEM, 
		"Name=room_type_0", "Value=Standard", ENDITEM, 
		"Name=price_night_0", "Value=AUD $ 125", ENDITEM, 
		"Name=total_price_0", "Value=AUD $ 135", ENDITEM, 
		"Name=continue", "Value=Continue", ENDITEM, 
		"Name=hotel_name", "Value=Hotel Creek", ENDITEM, 
		"Name=location_name", "Value=Melbourne", ENDITEM, 
		"Name=room_types", "Value=Standard", ENDITEM, 
		"Name=rooms_no", "Value=1", ENDITEM, 
		"Name=arr_date", "Value=09/12/2025", ENDITEM, 
		"Name=dep_date", "Value=10/12/2025", ENDITEM, 
		"Name=no_days", "Value=1", ENDITEM, 
		"Name=adults_room", "Value=1", ENDITEM, 
		"Name=children_room", "Value=0", ENDITEM, 
		"Name=price_night", "Value=AUD $ 125", ENDITEM, 
		"Name=total_price", "Value=AUD $ 135", ENDITEM, 
		LAST);

	lr_think_time(17);

	web_submit_data("BookingConfirm.php", 
		"Action=http://adactinhotelapp.com/BookingConfirm.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://adactinhotelapp.com/BookHotel.php", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=first_name", "Value=afffa", ENDITEM, 
		"Name=last_name", "Value=ahhhaaa", ENDITEM, 
		"Name=address", "Value=ajjajjjajaja", ENDITEM, 
		"Name=cc_num", "Value=1234667777778888", ENDITEM, 
		"Name=cc_type", "Value=VISA", ENDITEM, 
		"Name=cc_exp_month", "Value=7", ENDITEM, 
		"Name=cc_exp_year", "Value=2026", ENDITEM, 
		"Name=cc_cvv", "Value=1234", ENDITEM, 
		"Name=hotel_name_hid", "Value=Hotel Creek", ENDITEM, 
		"Name=location_name_hid", "Value=Melbourne", ENDITEM, 
		"Name=room_types_hid", "Value=Standard", ENDITEM, 
		"Name=rooms_no_hid", "Value=1", ENDITEM, 
		"Name=arr_date_hid", "Value=09/12/2025", ENDITEM, 
		"Name=dep_date_hid", "Value=10/12/2025", ENDITEM, 
		"Name=no_days_hid", "Value=1", ENDITEM, 
		"Name=adults_room_hid", "Value=1", ENDITEM, 
		"Name=children_room_hid", "Value=0", ENDITEM, 
		"Name=price_night_hid", "Value=AUD $ 125", ENDITEM, 
		"Name=total_price_hid", "Value=AUD $ 135", ENDITEM, 
		"Name=gst_hid", "Value=AUD $ 13.5", ENDITEM, 
		"Name=final_price_hid", "Value=AUD $ 148.5", ENDITEM, 
		LAST);

	lr_end_transaction("book",LR_AUTO);

	return 0;
}

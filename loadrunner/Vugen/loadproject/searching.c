searching()
{

	lr_start_transaction("search");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(22);

/*Correlation comment - Do not change!  Original value='Continue' Name ='continue' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=continue",
		"TagName=input",
		"Extract=value",
		"Name=continue",
		"Id=continue",
		"Class=reg_button",
		"Type=submit",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		"RequestUrl=*/SelectHotel.php*",
		LAST);

	web_submit_data("SelectHotel.php",
		"Action=http://adactinhotelapp.com/SelectHotel.php",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://adactinhotelapp.com/SearchHotel.php",
		"Snapshot=t3.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=location", "Value={location}", ENDITEM,
		"Name=hotels", "Value=Hotel Creek", ENDITEM,
		"Name=room_type", "Value={room_type}", ENDITEM,
		"Name=room_nos", "Value=1", ENDITEM,
		"Name=datepick_in", "Value=09/12/2025", ENDITEM,
		"Name=datepick_out", "Value=10/12/2025", ENDITEM,
		"Name=adult_room", "Value=1", ENDITEM,
		"Name=child_room", "Value=0", ENDITEM,
		"Name=Submit", "Value=Search", ENDITEM,
		"Name=datepick_diff", "Value=1", ENDITEM,
		LAST);

	lr_end_transaction("search",LR_AUTO);

	return 0;
}

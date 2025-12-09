logout()
{

	lr_start_transaction("logout");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(23);

	web_url("Logout.php", 
		"URL=http://adactinhotelapp.com/Logout.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://adactinhotelapp.com/BookingConfirm.php", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("logout",LR_AUTO);

	return 0;
}
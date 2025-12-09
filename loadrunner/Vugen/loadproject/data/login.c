login()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("index.php", 
		"URL=http://adactinhotelapp.com/index.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("log");

	web_submit_data("index.php_2", 
		"Action=http://adactinhotelapp.com/index.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://adactinhotelapp.com/index.php", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=snisha1234", ENDITEM, 
		"Name=password", "Value=123456", ENDITEM, 
		"Name=login", "Value=Login", ENDITEM, 
		LAST);

	lr_end_transaction("log",LR_AUTO);

	return 0;
}

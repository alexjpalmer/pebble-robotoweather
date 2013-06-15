#ifndef CONFIG_H
#define CONFIG_H

//NOTE: longitude is positive for East and negative for West
#define LATITUDE      		51.7
#define LONGITUDE 		-1.7
#define TIMEZONE 		0
#define DAY_NAME_LANGUAGE 	DAY_NAME_ENGLISH 	// Valid values: DAY_NAME_ENGLISH, DAY_NAME_GERMAN, DAY_NAME_FRENCH
// #define MOONPHASE_NAME_LANGUAGE MOONPHASE_TEXT_ENGLISH 	// Valid values: MOONPHASE_TEXT_ENGLISH, MOONPHASE_TEXT_GERMAN, MOONPHASE_TEXT_FRENCH
// #define day_month_x 		day_month_day_first 	// Valid values: day_month_month_first, day_month_day_first
// #define TRANSLATION_CW 		"CW%V" 			// Translation for the calendar week (e.g. "CW%V")
#define WEATHER_DELAY 		20			// Minute delay between weather updates 
#define PING_DELAY		3			// Minute delay between check phone connected updates

// Any of "us", "ca", "uk" (for idiosyncratic US, Candian and British measurements),
// "si" (for pure metric) or "auto" (determined by the above latitude/longitude)
#define UNIT_SYSTEM "auto"

// POST variables
#define WEATHER_KEY_LATITUDE 1
#define WEATHER_KEY_LONGITUDE 2
#define WEATHER_KEY_UNIT_SYSTEM 3

// Received variables
#define WEATHER_KEY_ICON 1
#define WEATHER_KEY_TEMPERATURE 2

#define WEATHER_HTTP_COOKIE 1949327671
#define TIME_HTTP_COOKIE 1131038282

#endif

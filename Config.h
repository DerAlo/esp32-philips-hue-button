// GPIO config
#define BUTTON_PIN 34 // The pin the button is connected to
#define LED_PIN 2 // The pin the LED is connected to

// Wifi Config
#define WIFI_SSID "Lauschangriff"
#define WIFI_PASSWORD "Wuschling0816!"

// Hue Config
#define HUE_IP "192.168.178.20" // IP of your hue bridge (you might want to give it a static IP on your router), see https://www.meethue.com/api/nupnp
#define HUE_API_USERNAME "tB8UXSMmkmyYfV1ukF9H5TvVlgawCzUy6YC4cEDC" // See https://developers.meethue.com/develop/get-started-2/
#define HUE_GROUP 1 // Numeric id of the group of lights you want to control, call hue api /api/{ username }/groups for this
char scenes[3][16] = { // 15 digit ids of the scenes you want the switch to iterate through. Call hue api /api/{ username }/scenes for these
    "WsSolNuJxqMGWgc" // Choose only scenes available for your chosen group
    
};

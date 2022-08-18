
class WirelessConnectionUtils {

  private:
    char* ssid;
    char* password;
  public:
    WirelessConnectionUtils(char*, char*);
    void connect();
};

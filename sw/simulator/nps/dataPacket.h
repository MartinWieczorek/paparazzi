

typedef struct{
    int ac_id;
    double pitch;
    double roll;
    double yaw;
    double thrust;

    template <typename Archive>
    void serialize( Archive & ar, const unsigned int version){
        ar & ac_id;
        ar & pitch;
        ar & roll;
        ar & yaw;
        ar & thrust;
    }
} paparazziPacket;


typedef struct{
    double x;
    double y;
    double z;

    template <typename Archive>
    void serialize( Archive & ar, const unsigned int version){
        ar & x;
        ar & y;
        ar & z;
    }
} vrepPacket;

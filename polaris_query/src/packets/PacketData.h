
class PacketData {
public:
    PacketData(size_t dataSize);
    ~PacketData();
    void appendData(void* data, size_t length);
    int getSize();
    void* getData();

private:
    int size;
    int currentPosition;
    void* dataPtr;
};
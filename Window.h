class Window{
    public:
        Window();
        ~Window();

        void setWorkTime(int time);
        void idleClockTick();
        void workClockTick();

        int getIdleTime();
        int getWorkTime();

        void changeStatus();

        bool isAvailable();

        int idleTime;
        int workTime;
        bool available;


};

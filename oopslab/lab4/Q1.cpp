#include <iostream>
#include <string>
using namespace std;
class vechile
{
    string model;
    float avgspeed;
    bool isRunning;
    float exshowroomprice;
    float accesoriescost;
    float roadtax;
    float insurance;
    float GST;

public:
    void setmodel(string m)
    {
        model = m;
    }
    string getmodel()
    {
        return model;
    }
    void setavgspeed(float s)
    {
        avgspeed = s;
    }
    float getavgspeed()
    {
        return avgspeed;
    }
    void setrunningstatus(bool r)
    {
        isRunning = r;
    }
    bool getrunningstatus()
    {
        return isRunning;
    }
    void setCost(float ep, float acp, float rt, float ins, float G)
    {
        exshowroomprice = ep;
        accesoriescost = acp;
        roadtax = rt;
        insurance = ins;
        GST = G;
    }
    float totalCost()
    {
        return (exshowroomprice + accesoriescost) + roadtax + (insurance * avgspeed / 10) + (GST);
    }
    void changeModel()
    {
        cout << "change model ....." << endl;
        ;
    }
    void accelerate()
    {
        if (avgspeed > 20)
        {
            cout << "accelerating...." << endl;
        }
    }
    void stop()
    {
        if (isRunning == false)
        {
            cout << "vehicle stopped" << endl;
        }
    }
};
int main()
{
    vechile v1;
    v1.setmodel("BMW");
    v1.setavgspeed(60);
    v1.setrunningstatus(true);
    v1.setCost(230000, 30000, 10000, 5000, 15000);
    cout << "model is: " << v1.getmodel() << "   avg speed is: " << v1.getavgspeed() << "  vechile is running: " << v1.getrunningstatus() << endl;
    v1.changeModel();
    cout << "total cost of the vehicle " << v1.totalCost();
    v1.accelerate();
    v1.stop();
}
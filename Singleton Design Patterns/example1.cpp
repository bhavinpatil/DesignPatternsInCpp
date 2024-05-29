#include<bits/stdc++.h>

using namespace std;

class GameSetting{
    static GameSetting* _instance;
    int _sensitivity;
    int _miniMapSize;
    int _refreshRate;

    GameSetting() : _sensitivity(82), _miniMapSize(75), _refreshRate(144){};

    public:
    static GameSetting* getInstance(){
        if(_instance==NULL){
            _instance = new GameSetting();
        }
        return _instance;
    }

    void setSensitivity(int value){_sensitivity=value;}
    void setMiniMapSize(int value){_miniMapSize=value;}
    void setRefreshRate(int value){_refreshRate=value;}

    int getSensitivity(){return _sensitivity;}
    int getMiniMapSize(){return _miniMapSize;}
    int getRefreshRate(){return _refreshRate;}

    void displaySettings(){
        cout<<"Sensitivity : "<< _sensitivity<<endl;
        cout<<"Mini Map Size : "<<_miniMapSize<<endl;
        cout<<"Refresh Rate : "<<_refreshRate<<endl;
    }



};

GameSetting* GameSetting::_instance = NULL;


void predatorValoSetting(){
    GameSetting* valoSettings = GameSetting::getInstance();
    
    valoSettings->setSensitivity(4);
    valoSettings->setRefreshRate(240);
    valoSettings->setMiniMapSize(60);
    cout<<"From My Personal PC settings"<<endl;
    valoSettings->displaySettings();
}

int main(){
    GameSetting *valoSettings = GameSetting::getInstance();

    cout<<"Defaut Settings : "<<endl;
    valoSettings->displaySettings();
    
    predatorValoSetting();
    



    return 0;
}
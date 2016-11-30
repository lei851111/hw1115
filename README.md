#Arduino感應式電子琴

##概述
透過蜂鳴器的發聲原理，計算得到每個音的頻率，從而控制音高，
接著利用一些簡單的材料，製作出一個能夠發出多種自訂音高的感應式電子琴，
讓你隨時隨地都能輕鬆地演奏音樂，你也可以是個音樂家!

##材料
* Arduino Mega 2560 控制面板 x1
* Line Tracking sensor 循線感測器 x5  
* LED 發光二極體 x5
* Passive Buzzer 小型無源蜂鳴器 x1  
* Breadboard 麵包板 x1  
* Dupont Line 杜邦線  

##接線
![接線圖](/sample/MusicTutorial/MusicTutorial.png)
##安裝
###[Arduino（IDE）](https://www.arduino.cc/en/Main/Software)   
請選擇以下符合您電腦作業系統的[Arduino（IDE）](https://www.arduino.cc/en/Main/Software)，並按照指示一步一步進行安裝程序。

* [Windows](https://www.arduino.cc/en/Guide/Windows)
* [Mac OS X](https://www.arduino.cc/en/Guide/MacOSX)
* [Linux](https://www.arduino.cc/en/Guide/Linux)
* [Portable IDE](https://www.arduino.cc/en/Guide/PortableIDE)（Windows & Linux）

安裝了[Arduino（IDE）](https://www.arduino.cc/en/Main/Software)後，請在列表中選擇您的主板位置，接著就能著手進行程式的撰寫。

###[Piano](https://github.com/lei851111/hw1115) Library
下載[Piano](https://github.com/lei851111/hw1115) Library後將其解壓縮，在Arduino IDE中，從上方工具列選擇Sketch->Import Library->Add Library，選擇函式庫[Piano](https://github.com/lei851111/hw1115) Library的整個資料夾，Arduino IDE將會自動幫你匯入。

##範例
* `Piano.ino` 感應式電子琴。  
* `MusicTutorial.ino` 引導演奏樂曲的互動式LED教學。

##函式
* `getIRVal(int pin);`   
取得循線感測器的數值。
* `setBuzzer(int buzzerpin);`   
設定蜂鳴器的腳位。
* `setPitch(int pin,int pitch,int delaytime);`   
設定循線感測器觸發時所發出的音高。
* `MusicTutorial(int irpin[],int ledpin[],int pitches[],int notes[],float beat[],int numofpitches,int numofnotes);`     
互動式LED演奏教學模式。   

[互動式LED演奏教學模式-示範影片](https://youtu.be/jB97wpOyih4)   
[![互動式LED演奏教學模式-示範影片](/sample/MusicTutorial/MusicTutorial.png)](https://youtu.be/jB97wpOyih4)







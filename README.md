# 鍵盤側錄木馬病毒(C++ 實作版)

<br>

===
===

<br>

##  簡介

撿到一個隨身碟的突發奇想，來寫一個鍵盤側錄病毒吧，XD。
使用 windows 的系統 API GetAsyncKeyState(int key)，細節就不多說了，直接實作。

<br>

##  實作

* [main.cpp](./main.cpp)  主程式進入點。

* [logger.cpp](./logger.cpp) 鍵盤側錄 log 檔的生成器

* [kthief.cpp](./kthief.cpp) 鍵盤側錄功能本體

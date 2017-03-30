# lab2
\*以下function皆在exe這個class裡*\

一開始
利用inFile這個object把我要的資料(file.in)存入main裡相對應的變數位置(k,a,b)
(先只傳第一行)
再以get function接收main要傳的變數(a,b,k)
將其存入class裡的private data member(RA,RB,K)
以outFile輸出 returningA和B function 回傳的RA,RB 到新開的檔案中(file.out)

然後用while迴圈,重複讀取我的file.in(從第二行起)
把file.in的資料丟給set function計算出新的RA,RB
再藉著outFile輸出returningA和B function 回傳的RA,RB 到剛剛開的檔案中(file.out)

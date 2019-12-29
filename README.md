# 環境構築参考URL
[VSCodeでの競プロ向けC++環境をWSLにRemote Developmentする形で作る](https://qiita.com/yoyomion/items/ed60a89009616f2efd55)  
[Visual Studio Codeで競プロ環境構築(導入編)](https://qiita.com/AokabiC/items/e9312856f588dd9303ed)  
上記のサイトを参考にして環境を構築  
自分が使いやすいようにコマンドや設定ファイルのパスを変更している  
publicにしているから特に記述しない  
* 自分の環境
  * windows
  * ubuntu in WSL
  * VScode


# ファイル構成
CQ：コンテスト用のディレクトリ  
PQ：過去問用のディレクトリ  
|  
-- ケースが存在するurlにあるディレクトリ名にする(abc114など)  
|  
-- a~dなど問題のレベルことにファイルを分ける(abc114_a.cppなど)

# ビルドの仕方

「ctrl + shift + b」でビルドされて「a.out」が出力される
ターミナルを開きworkdirectoryで「./a.out」で実行すると実行結果が出力される

# デバッグの仕方
デバッグしたいファイルがアクティブの状態で  
「F5」  
入力したデータが存在する場合は以下のファイルに記入  
「input.txt」  
まだデバッグ実行後a.outファイルが生成されるが削除してよい  
これはビルドされたもの

# テストの仕方

テストしたいファイルがアクティブの状態で  
「ctrl + alt + z」  
実行されるとファイルがあるディレクトリにtestフォルダが作成されサンプルが用意される  
その後ターミナルに以下のように結果が表示される  
```bash
[!] update available: 7.2.1 -> 7.4.0
[*] run: $ pip3 install -U online-judge-tools
[*] see: https://github.com/kmyk/online-judge-tools/blob/master/CHANGELOG.md
[*] 2 cases found

[*] sample-1
[x] time: 0.135475 sec
[+] AC

[*] sample-2
[x] time: 0.269625 sec
[+] AC

[x] slowest: 0.269625 sec  (for sample-2)
[x] max memory: 1.564000 MB  (for sample-1)
[+] test success: 2 cases
```


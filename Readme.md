gccテスト用サンプルCプログラム
==========================
gccとmakeを使った、コンパイルテスト用のソースファイル。

下記URLのブログ記事で紹介してしている内容のファイル。

* <https://www.yokoweb.net/2018/05/04/ubuntu-18_04-gcc-makme-install/>
* <https://www.yokoweb.net/2018/03/02/windows10-wsl-gcc-install/>

コンパイル方法
--------------------
コンパイルする。
```
$ make
```

生成したファイルを削除する。

```
$ make clean
```

梱包ファイル
-----------------

  * `Readme.md`・・・本説明ファイル
  * `sample.c`・・・サンプルC言語ソース
  * `Makefile`・・・サンプルmakeファイル

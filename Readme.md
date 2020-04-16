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

Doxygenによるドキュメント生成
-----------------------------
設定ファイル出力。`Doxyfile`の雛形が作られる。

```
$ doxygen -g
```

ドキュメント生成。

```
$ doxygen
```

結果は「html/」フォルダに出力されてるので、その中の `index.html` をブラウザで開く。

### Doxygenに関する記事
下記URLのブログ記事でDoxygenについて紹介している。

* <https://www.yokoweb.net/2020/02/18/macos-doxygen-install/>
* <https://www.yokoweb.net/2020/02/21/msys2-doxygen-install/>
* <https://www.yokoweb.net/2020/03/01/windows-doxygen-install/>

梱包ファイル
-----------------

* `Readme.md`・・・本説明ファイル
* `sample.c`・・・サンプルC言語ソース
* `Makefile`・・・サンプルmakeファイル

来歴
----

* 2018/11/04 新規作成(By T.Yokobayashi)
* 2020/04/16 Doxygenのコメント記述に対応


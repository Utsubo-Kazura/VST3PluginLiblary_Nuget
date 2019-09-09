# VST3PluginLiblary_Nuget 
これは、VST3 SDKをVisual Studioで簡単に使用するため、Nugetパッケージ化したものです。  
オリジナルのVST3 SDK 3.6.13は下記からダウンロードできます。

https://github.com/steinbergmedia/vst3sdk

※VSTはSteinberg Media Technologies GmbHの登録商標です。

# ライブラリの作成方法
下記コマンドを実行してください。

`nuget pack VST3PluginLiblary_3.6.13.nuspec`


nuget.exeは下記よりダウンロードできます。

https://www.nuget.org/downloads

# ライブラリの使用方法
## 使用にあたっての前提
作成済みのNuGetパッケージ「VST3PluginLiblary_3.6.13.1.0.0.nupkg」があることが前提となります。  
また、「VST3PluginLiblary_3.6.13.1.0.0.nupkg」が保存されているフォルダをローカルパッケージソースとして追加されていることが前提です。  
ローカルパッケージリソースの追加方法は下記の「パッケージ ソース」の項目をご確認ください。

https://docs.microsoft.com/ja-jp/nuget/consume-packages/install-use-packages-visual-studio

## 使用手順
1. Visual StudioでDLLプロジェクトを新規作成します。
2. ソリューションエクスプローラーで作成したプロジェクトを選択し、右クリック。「NuGetパッケージの管理」を選びます。
3. ローカルパッケージソースから、「VST3PluginLiblary_3.6.13」を選んでインストールします。  プロジェクトに変更を加えてもよいか確認のダイアログが開いた場合は「OK」を押します。

以上でVST3 SDKを使用する準備が整います。使用する場合は「vst3libs.h」をincludeしてください。  
なお、インストールされたNuGetパッケージはプロジェクトのフォルダ配下の「packages\VST3PluginLiblary_3.6.13.1.0.0」にあります。

## サンプルコード
本NuGetパッケージをインストールして、すぐにVST3プラグインを作成できるよう、パッケージ内にサンプルコードを同梱しています。  
「packages\VST3PluginLiblary_3.6.13.1.0.0\build\native\sample」配下の「myvst3.h」と「myvst3.cpp」がサンプルコードになります。  
プロジェクトのフォルダにコピー後、Visual Studioに追加2つのファイルを追加していただければ、すぐにビルドできるはずです。

# ライセンス
ライセンスはGPLv3になります。

# 注意点
Visual Studioのコード生成→ランタイムライブラリの設定が"/MT"もしくは"/MTd"の場合は「vst3libs.h」をincludeする前に、「USE_STATIC_CRT」を定義してください。(#define USE_STATIC_CRT)

# 連絡先 他
Twitter → https://twitter.com/vstcpp  
Webサイト → http://vstcpp.wpblog.jp/

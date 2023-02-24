<div align="center">

   [![C++](https://img.shields.io/badge/Language-C%2B%2B-%23f34b7d.svg?style=plastic)](https://en.wikipedia.org/wiki/C%2B%2B)
   [![LOL](https://img.shields.io/badge/Game-League%20of%20Legends-445fa5.svg?style=plastic)](https://na.leagueoflegends.com)
   [![Windows](https://img.shields.io/badge/Platform-Windows-0078d7.svg?style=plastic)](https://en.wikipedia.org/wiki/Microsoft_Windows)
   [![x86](https://img.shields.io/badge/Arch-x86-red.svg?style=plastic)](https://en.wikipedia.org/wiki/X86)
   [![License](https://img.shields.io/github/license/R3nzTheCodeGOD/R3nzSkin.svg?style=plastic)](LICENSE)
   [![Issues](https://img.shields.io/github/issues/R3nzTheCodeGOD/R3nzSkin.svg?style=plastic)](https://github.com/R3nzTheCodeGOD/R3nzSkin/issues)
   ![Windows](https://github.com/R3nzTheCodeGOD/R3nzSkin/workflows/Windows/badge.svg?branch=main&event=push)

   # **newSkin**

</div>

- 改变游戏中你的冠军、守卫、其他冠军、塔、小兵和丛林怪物的皮肤
- 自动皮肤数据库更新。
- 支持旁观者模式。
- 单场游戏随时换肤，无限次换肤。
- 支持世界上所有流行语言。
- 使用ImGui进行游戏内配置。
- 基于JSON 的配置保存和加载
- 使用x86RetSpoof，使用欺骗性返回地址调用 League 函数

# 使用方法
   1. 编译源码或下载编译后的版本。
   2. 自己使用Skin_Injector或将生成的 DLL 注入到游戏中。
      - *如果注入失败，可能需要管理员权限。
      - 如果在进入竞技场之前注入，联盟客户端可能会崩溃。
         - 一个解决方法是在你进入竞技场之前不要注射（你需要速度很快才能不破坏游戏）
   3. 按Insert调出菜单。
   4. 为你、你的队友、敌人、守卫选择皮肤。

# 进一步优化
   如果您的 CPU 支持 AVX / AVX2 / AVX-512 指令集，您可以在项目设置中启用它。这应该会产生更高效的代码，并针对您的 CPU 进行了优化。目前在项目设置中选择了 SSE2 指令。

# 引用声明
   该程序是<a href="https://github.com/B3akers">B3akers</a>/<a href="https://github.com/B3akers/LeagueSkinChanger">LeagueSkinChanger</a> 项目的改进和更新版本。

# UI测试部分 主要是黑盒功能测试，编写main方法测试，不断运行界面进行交互，同时弹出相应框反馈  

## 对界面视图测试

## 对按钮、页面链接跳转测试
1. 测试中出现按钮大小不一致，颜色异常等问题
2. 有的按钮会提交一些表项，或者选择一些选项，这类按钮与普通按钮的操作有区别，不仅需要submit，还需要onclick触发，同时可通过Form["name"]获取提交项，在后台的post中处理
3. 页面布局位置不对
4. 跳转链接，以及弹框提示不断测试达到准确无误


## 对表单提交到后台收到数据测试
设置断点和异常点输出
# 编译运行

## 目前阶段 - 注册中心和网关暂未部署的：

目前采用makefile 手动编译运行：

    服务端`make server`

    客户端` make client`

## 等部署后 编写脚本启动服务（多项） 通过注册中心调用

现在的客户端 转变成注册中心的一部分

客户端只需要向注册服务中心发送网络请求即可

---

# 网络相关信息

服务端端口 ：9002
﻿using System;
using System.Web;
using our.src.exception;
using our.webService;
using our.webService.dal;
using our.webService.dal.imp;

namespace our.ui
{
    public partial class login : System.Web.UI.Page
    {
        /// <summary>
        /// 后端与前端数据交互-登录界面接收到用户名和密码
        /// 查询数据库是否存在
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        protected void Page_Load(object sender, EventArgs e)
        {
            if (!IsPostBack)
            {
                if (Request.HttpMethod == "GET") //the request for the origin login page
                {
                    // 获得服务器响应前端的内容
                    
                }
                else if (Request.HttpMethod == "POST")
                {
                    // POST 方法用来传输实体的主体
                    string Username = Request.Form["username"];
                    string Password = Request.Form["password"];

                    UserDao userInter = new UserImp();
                    User user = userInter.Login(Username, Password);
                    // 检查用户名是否存在数据库里
                    if (user == null)
                    {
                        //不存在，请注册
                        Response.Write("<script>alert('用户名不存在或密码错误！')</script>");
                        return;
                    }

                    HttpContext.Current.Session["user"] = Username;
                    HttpContext.Current.Session.Timeout = 60; // 设置登陆会话时间，超时后重新登录
                    if (user.getType() == false) // 用户界面
                    {
                        Response.Write("<script>alert('登录成功，" + Username + "你好')</script>");
                        Response.Redirect("user.aspx");
                    }
                    else
                    {
                        // 管理员界面
                        Response.Write("<script>alert('登录成功，管理员你好')</script>");
                        Response.Redirect("manager.aspx");
                    }
                }
                else
                {
                    //
                }
            }
        }
    }
}
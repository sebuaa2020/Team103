using System;
using System.Collections.Generic;
using System.Linq;
using System.Web.UI;

namespace our.src.exception
{
    /**
     * 基于网页显示错误弹框
     */
    public class MessageShow
    {
        public MessageShow() { }
        public void ErrorShow(string strMsg)
        {
            ClientScriptManager scriptManager = ((Page)System.Web.HttpContext.Current.Handler).ClientScript;
            scriptManager.RegisterStartupScript(typeof(string), "", "alert('" + strMsg + "');", true);
        }
    }
}
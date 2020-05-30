using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Data.SqlClient; // 数据库包

namespace our.DB
{
    /// <summary>
    /// 操作SQL Server数据库的类
    /// </summary>
    public class DataBase
    {
        //连接数据库
        public SqlConnection sqlCon;
        //连接数据库字符串
        public String strSql = "server=localhost;database=qizhi;user id=sa;Password=qizhi";

        //默认构造函数
        public DataBase()
        {
            if (sqlCon == null)
            {
                sqlCon = new SqlConnection(strSql);
                sqlCon.Open();
            }
        }
        public void Close()
        {
            if (sqlCon != null)
            {
                sqlCon.Close();
                //sqlCon.Dispose();
            }
        }

    }
}
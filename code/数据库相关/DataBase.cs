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
        public String strSql = @"Data Source=172.17.2.64;Initial Catalog=vjudge;Persist Security Info=True;User ID=sa;Password=qizhiruangong";

        //默认构造函数
        public DataBase()
        {
            if (sqlCon == null)
            {
                sqlCon = new SqlConnection();
                sqlCon.ConnectionString = strSql;
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
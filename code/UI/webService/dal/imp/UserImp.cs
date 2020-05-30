using our.DB;
using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Web;
using System.Windows.Forms;
using our.src.exception;

namespace our.webService.dal.imp
{
	/// <summary>
	/// 实现用户名查询和添加接口
	/// </summary>
	public class UserImp : UserDao
	{
		DataBase db = new DataBase();

		/// <summary>
		/// 登录检查是否存在用户名
		/// </summary>
		/// <param name="username"></param>
		/// <param name="password"></param>
		/// <returns></returns>
		public User Login(string username, string password)
		{
			User user = null;
			string CHECK_LOGIN_SQL = "select * from t_user where U_USERNAME='" + username + "' and U_PASSWORD='" + password + "'";
			SqlCommand sqlCmd = new SqlCommand(CHECK_LOGIN_SQL, db.sqlCon);
			try
			{
				SqlDataReader sqlReader = sqlCmd.ExecuteReader();
				if (sqlReader.Read())
				{
					user.setID(sqlReader["U_ID"].ToString());
					user.setNo(Convert.ToInt32(sqlReader["U_NO"]));
					user.setPassword(sqlReader["U_PASSWORD"].ToString());
					user.setUsername(sqlReader["U_USERNAME"].ToString());
					user.setType(Convert.ToBoolean(sqlReader["U_TYPE"]));
					return user;
				}
			}
			catch (SqlException e)
			{
				throw new Exception(e.Message);
			}
			return null;
		}

		/// <summary>
		/// 插入用户
		/// </summary>
		/// <param name="user"></param>
		public void InsertUser(User user)
		{
			string INSERT_USER_SQL = "insert into t_user values ('" + user.getUsername() + "', '" +
				user.getPassword() + "', '" + user.getID() + "')";
			SqlCommand sqlCmd = new SqlCommand(INSERT_USER_SQL, db.sqlCon);
			try
			{
				sqlCmd.ExecuteNonQuery();
			}
			catch (SqlException e)
			{
				MessageShow show = new MessageShow();
				show.ErrorShow("发生错误或用户名被占用！请重新注册！");
				throw new Exception("发生错误或用户名被占用！请重新注册！");
			}

		}
	}
}
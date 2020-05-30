using our.webService;
using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Web;

namespace our.webService.dal.imp
{
	public class ManagerImp : ManagerDao
	{
		public ManagerImp() { }

		public void DeleteInstr(Instr instr)
		{
			try
			{

			}
			catch (SqlException e)
			{
				throw new Exception(e.Message);
			}
			throw new NotImplementedException();
		}

		public void DeleteUser(User user)
		{
			try
			{

			}
			catch (SqlException e)
			{
				throw new Exception(e.Message);
			}
			throw new NotImplementedException();
		}

		public List<Instr> GetAllInstr()
		{
			throw new NotImplementedException();
		}

		public List<Task> GetAllTask()
		{
			throw new NotImplementedException();
		}

		public List<User> GetAllUsers()
		{
			throw new NotImplementedException();
		}

		public void InsertInstr(string keyWord, string instr)
		{
			try
			{

			}
			catch (SqlException e)
			{
				throw new Exception(e.Message);
			}
			throw new NotImplementedException();
		}

		public void UpdateUser(User user)
		{
			try
			{

			}
			catch (SqlException e)
			{
				throw new Exception(e.Message);
			}
			throw new NotImplementedException();
		}
		/// <summary>
		/// 管理员导航
		/// </summary>
		/// <returns></returns>
		public int navigation()
		{
			throw new NotImplementedException();
		}
		/// <summary>
		/// 建图
		/// </summary>
		/// <returns></returns>
		public int SlamStart()
		{
			throw new NotImplementedException();
		}
		/// <summary>
		/// 保存建图
		/// </summary>
		/// <returns></returns>
		public int GetSlam()
		{
			throw new NotImplementedException();
		}
	}
}
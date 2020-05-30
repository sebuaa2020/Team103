using our.webService;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace our.webService.dal.imp
{
	/// <summary>
	/// 实现登录后的用户界面接口
	/// </summary>
	public class AccountImp : AccountDao
	{
		/// <summary>
		/// 预定任务
		/// </summary>
		/// <param name="user"></param>
		public void BookTask(User user)
		{
			throw new NotImplementedException();
		}
		/// <summary>
		/// 查看该任务,返回Task，若发生错误返回null
		/// </summary>
		/// <param name="task"></param>
		/// <returns></returns>
		public Task GetTask(Task task)
		{
			throw new NotImplementedException();
		}

		/// <summary>
		/// 查询历史任务表,返回Task表，若发生错误返回null
		/// </summary>
		/// <returns></returns>
		public List<Task> GetTaskList()
		{
			throw new NotImplementedException();
		}
	}
}
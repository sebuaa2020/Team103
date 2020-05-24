using our.webService;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Task = our.webService.Task;

namespace our.webService.dal
{
	/// <summary>
	/// 登录后用户的数据库接口类，一些用户可用的操作
	/// </summary>
	interface AccountDao
	{
		/// <summary>
		/// 查询历史任务表,返回Task表，若发生错误返回null
		/// </summary>
		/// <returns></returns>
		List<Task> GetTaskList();

		/// <summary>
		/// 预定任务
		/// </summary>
		/// <param name="user"></param>
		void BookTask(User user);

		/// <summary>
		/// 查看该任务,返回Task，若发生错误返回null
		/// </summary>
		/// <param name="task"></param>
		/// <returns></returns>
		Task GetTask(Task task);


	}
}

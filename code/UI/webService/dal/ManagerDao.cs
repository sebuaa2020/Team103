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
	/// 管理员登录后的数据库接口类，用于管理员的相关操作
	/// </summary>
	interface ManagerDao
	{
		/// <summary>
		/// 查询所有指令
		/// </summary>
		/// <returns 指令表></returns>
		List<Instr> GetAllInstr();

		/// <summary>
		/// 添加新的指令
		/// </summary>
		/// <param name="keyWord"></param>
		/// <param name="instr"></param>
		void InsertInstr(string keyWord, string instr);

		/// <summary>
		/// 删除一个指令
		/// </summary>
		/// <param name="instr"></param>
		void DeleteInstr(Instr instr);

		/// <summary>
		/// 查询所有用户信息
		/// </summary>
		/// <returns></returns>
		List<User> GetAllUsers();

		/// <summary>
		/// 删除一个用户
		/// </summary>
		/// <param name="user"></param>
		void DeleteUser(User user);

		/// <summary>
		/// 更新用户
		/// </summary>
		/// <param name="user"></param>
		void UpdateUser(User user);

		/// <summary>
		/// 查询所有任务列表
		/// </summary>
		/// <returns></returns>
		List<Task> GetAllTask();

		/// <summary>
		/// 开始建图
		/// </summary>
		/// <returns></returns>
		int SlamStart();

		/// <summary>
		/// 存储建图
		/// </summary>
		/// <returns></returns>
		int GetSlam();

		/// <summary>
		/// 导航
		/// </summary>
		/// <returns></returns>
		int navigation();
	}
}

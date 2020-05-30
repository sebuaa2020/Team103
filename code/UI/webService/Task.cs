using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Web;

namespace our.webService
{
	public class Task
	{
		/// <summary>
		/// 任务类的属性以及数据交互
		/// 相应的任务对应的操作
		/// </summary>
		[DllImport("Tach.dll", EntryPoint = "sum", CharSet = CharSet.Ansi,
			CallingConvention = CallingConvention.StdCall)]
		public static extern int slamStart();
		[DllImport("Tach.dll", EntryPoint = "sum", CharSet = CharSet.Ansi,
			CallingConvention = CallingConvention.StdCall)]
		public static extern int getSlam();
		[DllImport("Tach.dll", EntryPoint = "sum", CharSet = CharSet.Ansi,
			CallingConvention = CallingConvention.StdCall)]
		public static extern void broadCastWeather();
		[DllImport("Tach.dll", EntryPoint = "sum", CharSet = CharSet.Ansi,
			CallingConvention = CallingConvention.StdCall)]
		public static extern void broadCastAny();

		private int no;
		private User user;
		private Instr instruction;
		private bool isFinished;
		private DateTime time;

		string[] INSTR_STR = { "STARTSLAM", "GETSLAM", "FORWOARD", "LEFT", "RIGHT",
			"BACK", "BROADCASTWEATHER", "BROADCASTANY", "CAPTURE" };
		public int getNo()
		{
			return no;
		}
		public void setNo(int no)
		{
			this.no = no;
		}
		public User getUser()
		{
			return user;
		}
		public void setUser(User user)
		{
			this.user = user;
		}
		public Instr getInstr()
		{
			return instruction;
		}
		public void setInstr(Instr instruction)
		{
			this.instruction = instruction;
		}
		public bool getIsFinshed()
		{
			return isFinished;
		}
		public void setIsPayed(bool isFinished)
		{
			this.isFinished = isFinished;
		}

		public DateTime getTime()
		{
			return time;
		}
		public void setTime(DateTime time)
		{
			this.time = time;
		}
		public string toString()
		{
			return "Task [no=" + no + ", user=" + user + ", instr=" + instruction
					+ ", isFinshed=" + isFinished + ", time=" + time + "]";
		}

		/// <summary>
		/// 用户预定的任务的相应操作
		/// </summary>
		/// <param name="instr"></param>
		public void func(string instr)
		{



			if (instr == INSTR_STR[0]) // 开始建图
			{

			}
			else if (instr == INSTR_STR[1])
			{

			}
			else if (instr == INSTR_STR[2])
			{

			}
			else if (instr == INSTR_STR[3])
			{

			}
			else if (instr == INSTR_STR[4])
			{

			}
			else if (instr == INSTR_STR[5])
			{

			}
			else if (instr == INSTR_STR[6])
			{
				broadCastWeather();
			}
			else if (instr == INSTR_STR[7])
			{
				broadCastAny();
			}
			else if (instr == INSTR_STR[8])
			{

			}

		}
	}
}
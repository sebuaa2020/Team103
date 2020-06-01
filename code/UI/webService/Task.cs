using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Web;
using System.Web.UI.WebControls;

namespace our.webService
{
	public class Task
	{
		/// <summary>
		/// 任务类的属性以及数据交互
		/// 相应的任务对应的操作
		/// </summary>
		[DllImport("libslam.so")]
		public static extern int slamStart();
		[DllImport("libslam.so")]
		public static extern int getSlam();
		[DllImport("libnva.so")]
		
		//[DllImport("weather.so")]
		public static extern string broadCastWeather();
		[DllImport("Tach.so", EntryPoint = "main", CharSet = CharSet.Ansi,
			CallingConvention = CallingConvention.StdCall)]
		public static extern string voiceInput();

		public int no;
		public int user_no;
		public int instr_no;
		public bool isFinished;
		public DateTime time;

		public int getNo()
		{
			return no;
		}
		public void setNo(int no)
		{
			this.no = no;
		}
		public int getUserNo()
		{
			return user_no;
		}
		public void setUserNo(int no)
		{
			this.user_no = no;
		}
		public int getInstrNo()
		{
			return instr_no;
		}
		public void setInstrNo(int no)
		{
			this.instr_no = no;
		}
		public bool getIsFinished()
		{
			return isFinished;
		}
		public void setIsFinished(bool isFinished)
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
			return "Task [no=" + no + ", user_no=" + user_no + ", instr_no=" + instr_no
					+ ", isFinshed=" + isFinished + ", time=" + time + "]";
		}

		/// <summary>
		/// 用户预定的任务的相应操作
		/// </summary>
		/// <param name="instr"></param>
		public string func(int instr, string goal, string dis, string pi)
		{
			
			if (instr == 6) // 开始建图
			{
				return "建图成功！";
			}
			else if (instr == 7) // 保存建图
            {
				return "保存建图成功！";
			}
			else if (instr == 8) // 确认导航点
            {
				return "确认成功！";
			}
			else if (instr == 9) // 保存导航点
			{
				return "保存成功！";
			}
			else if (instr == 10) // 重命名导航点
			{
				return "重命名成功！";
			}
			else if (instr == 1) // 导航
			{
				return "导航成功！";
			}
			else if (instr == 2) // 移动
			{
				return "移动成功！";
			}
			else if (instr == 3) // 抓取
			{
				return "抓取成功！";
			}
			else if (instr == 4) // 天气
			{
				return broadCastWeather();
			}
			else if (instr == 5) // 语音
			{
				return "执行成功！";
			}
			return "error!";
		}
	}
}
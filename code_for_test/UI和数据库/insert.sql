--插入
-- ----------------------------
-- Records of t_instr 信息-指令
-- ----------------------------
set IDENTITY_INSERT t_instr off
INSERT INTO t_instr VALUES ('weather', 'net');
INSERT INTO t_instr VALUES ('', 'move');
INSERT INTO t_instr VALUES ('', 'crawl');
INSERT INTO t_instr VALUES ('', 'put down');

-- ----------------------------
-- Records of t_user 记录信息-用户
-- ----------------------------
set IDENTITY_INSERT t_user off
INSERT INTO t_user VALUES ( 'root', 'qizhi', '110', 'TRUE');
INSERT INTO t_user VALUES ( 'yejingbo', 'ff', '520202199901011111', 'FALSE');
INSERT INTO t_user VALUES ( 'qizhi', 'ff', '520202199901011121', 'FALSE');

-- ----------------------------
-- Records of t_order 记录信息-任务
-- ----------------------------
set IDENTITY_INSERT t_task off
INSERT INTO t_task VALUES ( '1', '0', '1', '2020-04-07 13:37:32' );
INSERT INTO t_task VALUES ( '1', '1', '1', '2020-04-07 13:37:32' );
INSERT INTO t_task VALUES ( '2', '2', '0', '2020-04-07 13:37:32' );
INSERT INTO t_task VALUES ( '1', '3', '0', '2020-04-07 13:37:32' );

-- ----------------------------
-- Table structure for t_net 表-网络天气
-- ----------------------------
set IDENTITY_INSERT t_net off
INSERT INTO t_net VALUES ( '2020-04-07 13:37:32', 'Sunny' );
INSERT INTO t_net VALUES ( '2020-04-08 13:37:32', 'Rain' );
INSERT INTO t_net VALUES ( '2020-04-09 13:37:32', 'Cloudy' );
INSERT INTO t_net VALUES ( '2020-04-10 13:37:32', 'Sunny' );
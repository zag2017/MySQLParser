
// Generated from MySQLParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MySQLParser.h"


namespace parser {

/**
 * This interface defines an abstract listener for a parse tree produced by MySQLParser.
 */
class  MySQLParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterRoot(MySQLParser::RootContext *ctx) = 0;
  virtual void exitRoot(MySQLParser::RootContext *ctx) = 0;

  virtual void enterSql_statements(MySQLParser::Sql_statementsContext *ctx) = 0;
  virtual void exitSql_statements(MySQLParser::Sql_statementsContext *ctx) = 0;

  virtual void enterSql_statement(MySQLParser::Sql_statementContext *ctx) = 0;
  virtual void exitSql_statement(MySQLParser::Sql_statementContext *ctx) = 0;

  virtual void enterEmpty_statement(MySQLParser::Empty_statementContext *ctx) = 0;
  virtual void exitEmpty_statement(MySQLParser::Empty_statementContext *ctx) = 0;

  virtual void enterDdl_statement(MySQLParser::Ddl_statementContext *ctx) = 0;
  virtual void exitDdl_statement(MySQLParser::Ddl_statementContext *ctx) = 0;

  virtual void enterDml_statement(MySQLParser::Dml_statementContext *ctx) = 0;
  virtual void exitDml_statement(MySQLParser::Dml_statementContext *ctx) = 0;

  virtual void enterTransaction_statement(MySQLParser::Transaction_statementContext *ctx) = 0;
  virtual void exitTransaction_statement(MySQLParser::Transaction_statementContext *ctx) = 0;

  virtual void enterReplication_statement(MySQLParser::Replication_statementContext *ctx) = 0;
  virtual void exitReplication_statement(MySQLParser::Replication_statementContext *ctx) = 0;

  virtual void enterPrepared_statement(MySQLParser::Prepared_statementContext *ctx) = 0;
  virtual void exitPrepared_statement(MySQLParser::Prepared_statementContext *ctx) = 0;

  virtual void enterCompound_statement(MySQLParser::Compound_statementContext *ctx) = 0;
  virtual void exitCompound_statement(MySQLParser::Compound_statementContext *ctx) = 0;

  virtual void enterAdministration_statement(MySQLParser::Administration_statementContext *ctx) = 0;
  virtual void exitAdministration_statement(MySQLParser::Administration_statementContext *ctx) = 0;

  virtual void enterUtility_statement(MySQLParser::Utility_statementContext *ctx) = 0;
  virtual void exitUtility_statement(MySQLParser::Utility_statementContext *ctx) = 0;

  virtual void enterCreate_database(MySQLParser::Create_databaseContext *ctx) = 0;
  virtual void exitCreate_database(MySQLParser::Create_databaseContext *ctx) = 0;

  virtual void enterCreate_event(MySQLParser::Create_eventContext *ctx) = 0;
  virtual void exitCreate_event(MySQLParser::Create_eventContext *ctx) = 0;

  virtual void enterCreate_index(MySQLParser::Create_indexContext *ctx) = 0;
  virtual void exitCreate_index(MySQLParser::Create_indexContext *ctx) = 0;

  virtual void enterCreate_logfile_group(MySQLParser::Create_logfile_groupContext *ctx) = 0;
  virtual void exitCreate_logfile_group(MySQLParser::Create_logfile_groupContext *ctx) = 0;

  virtual void enterCreate_procedure(MySQLParser::Create_procedureContext *ctx) = 0;
  virtual void exitCreate_procedure(MySQLParser::Create_procedureContext *ctx) = 0;

  virtual void enterCreate_function(MySQLParser::Create_functionContext *ctx) = 0;
  virtual void exitCreate_function(MySQLParser::Create_functionContext *ctx) = 0;

  virtual void enterCreate_server(MySQLParser::Create_serverContext *ctx) = 0;
  virtual void exitCreate_server(MySQLParser::Create_serverContext *ctx) = 0;

  virtual void enterCopyCreateTable(MySQLParser::CopyCreateTableContext *ctx) = 0;
  virtual void exitCopyCreateTable(MySQLParser::CopyCreateTableContext *ctx) = 0;

  virtual void enterQueryCreateTable(MySQLParser::QueryCreateTableContext *ctx) = 0;
  virtual void exitQueryCreateTable(MySQLParser::QueryCreateTableContext *ctx) = 0;

  virtual void enterColCreateTable(MySQLParser::ColCreateTableContext *ctx) = 0;
  virtual void exitColCreateTable(MySQLParser::ColCreateTableContext *ctx) = 0;

  virtual void enterCreate_tablespace_innodb(MySQLParser::Create_tablespace_innodbContext *ctx) = 0;
  virtual void exitCreate_tablespace_innodb(MySQLParser::Create_tablespace_innodbContext *ctx) = 0;

  virtual void enterCreate_tablespace_ndb(MySQLParser::Create_tablespace_ndbContext *ctx) = 0;
  virtual void exitCreate_tablespace_ndb(MySQLParser::Create_tablespace_ndbContext *ctx) = 0;

  virtual void enterCreate_trigger(MySQLParser::Create_triggerContext *ctx) = 0;
  virtual void exitCreate_trigger(MySQLParser::Create_triggerContext *ctx) = 0;

  virtual void enterCreate_view(MySQLParser::Create_viewContext *ctx) = 0;
  virtual void exitCreate_view(MySQLParser::Create_viewContext *ctx) = 0;

  virtual void enterCreate_database_option(MySQLParser::Create_database_optionContext *ctx) = 0;
  virtual void exitCreate_database_option(MySQLParser::Create_database_optionContext *ctx) = 0;

  virtual void enterOwner_statement(MySQLParser::Owner_statementContext *ctx) = 0;
  virtual void exitOwner_statement(MySQLParser::Owner_statementContext *ctx) = 0;

  virtual void enterPreciseSchedule(MySQLParser::PreciseScheduleContext *ctx) = 0;
  virtual void exitPreciseSchedule(MySQLParser::PreciseScheduleContext *ctx) = 0;

  virtual void enterIntervalSchedule(MySQLParser::IntervalScheduleContext *ctx) = 0;
  virtual void exitIntervalSchedule(MySQLParser::IntervalScheduleContext *ctx) = 0;

  virtual void enterTimestamp_value(MySQLParser::Timestamp_valueContext *ctx) = 0;
  virtual void exitTimestamp_value(MySQLParser::Timestamp_valueContext *ctx) = 0;

  virtual void enterInterval_expr(MySQLParser::Interval_exprContext *ctx) = 0;
  virtual void exitInterval_expr(MySQLParser::Interval_exprContext *ctx) = 0;

  virtual void enterInterval_type(MySQLParser::Interval_typeContext *ctx) = 0;
  virtual void exitInterval_type(MySQLParser::Interval_typeContext *ctx) = 0;

  virtual void enterIndex_type(MySQLParser::Index_typeContext *ctx) = 0;
  virtual void exitIndex_type(MySQLParser::Index_typeContext *ctx) = 0;

  virtual void enterIndex_option(MySQLParser::Index_optionContext *ctx) = 0;
  virtual void exitIndex_option(MySQLParser::Index_optionContext *ctx) = 0;

  virtual void enterProc_param(MySQLParser::Proc_paramContext *ctx) = 0;
  virtual void exitProc_param(MySQLParser::Proc_paramContext *ctx) = 0;

  virtual void enterFunc_param(MySQLParser::Func_paramContext *ctx) = 0;
  virtual void exitFunc_param(MySQLParser::Func_paramContext *ctx) = 0;

  virtual void enterRcComment(MySQLParser::RcCommentContext *ctx) = 0;
  virtual void exitRcComment(MySQLParser::RcCommentContext *ctx) = 0;

  virtual void enterRcSqllang(MySQLParser::RcSqllangContext *ctx) = 0;
  virtual void exitRcSqllang(MySQLParser::RcSqllangContext *ctx) = 0;

  virtual void enterRcDeterm(MySQLParser::RcDetermContext *ctx) = 0;
  virtual void exitRcDeterm(MySQLParser::RcDetermContext *ctx) = 0;

  virtual void enterRcSqldata(MySQLParser::RcSqldataContext *ctx) = 0;
  virtual void exitRcSqldata(MySQLParser::RcSqldataContext *ctx) = 0;

  virtual void enterRcSecurestmt(MySQLParser::RcSecurestmtContext *ctx) = 0;
  virtual void exitRcSecurestmt(MySQLParser::RcSecurestmtContext *ctx) = 0;

  virtual void enterServer_option(MySQLParser::Server_optionContext *ctx) = 0;
  virtual void exitServer_option(MySQLParser::Server_optionContext *ctx) = 0;

  virtual void enterColumn_def_table_constraints(MySQLParser::Column_def_table_constraintsContext *ctx) = 0;
  virtual void exitColumn_def_table_constraints(MySQLParser::Column_def_table_constraintsContext *ctx) = 0;

  virtual void enterColumnDefinition(MySQLParser::ColumnDefinitionContext *ctx) = 0;
  virtual void exitColumnDefinition(MySQLParser::ColumnDefinitionContext *ctx) = 0;

  virtual void enterConstraintDefinition(MySQLParser::ConstraintDefinitionContext *ctx) = 0;
  virtual void exitConstraintDefinition(MySQLParser::ConstraintDefinitionContext *ctx) = 0;

  virtual void enterIndexDefinition(MySQLParser::IndexDefinitionContext *ctx) = 0;
  virtual void exitIndexDefinition(MySQLParser::IndexDefinitionContext *ctx) = 0;

  virtual void enterColumn_definition(MySQLParser::Column_definitionContext *ctx) = 0;
  virtual void exitColumn_definition(MySQLParser::Column_definitionContext *ctx) = 0;

  virtual void enterColConstrNull(MySQLParser::ColConstrNullContext *ctx) = 0;
  virtual void exitColConstrNull(MySQLParser::ColConstrNullContext *ctx) = 0;

  virtual void enterColConstrDflt(MySQLParser::ColConstrDfltContext *ctx) = 0;
  virtual void exitColConstrDflt(MySQLParser::ColConstrDfltContext *ctx) = 0;

  virtual void enterColConstrAuInc(MySQLParser::ColConstrAuIncContext *ctx) = 0;
  virtual void exitColConstrAuInc(MySQLParser::ColConstrAuIncContext *ctx) = 0;

  virtual void enterColConstrPK(MySQLParser::ColConstrPKContext *ctx) = 0;
  virtual void exitColConstrPK(MySQLParser::ColConstrPKContext *ctx) = 0;

  virtual void enterColConstrUK(MySQLParser::ColConstrUKContext *ctx) = 0;
  virtual void exitColConstrUK(MySQLParser::ColConstrUKContext *ctx) = 0;

  virtual void enterColConstrComment(MySQLParser::ColConstrCommentContext *ctx) = 0;
  virtual void exitColConstrComment(MySQLParser::ColConstrCommentContext *ctx) = 0;

  virtual void enterColConstrForm(MySQLParser::ColConstrFormContext *ctx) = 0;
  virtual void exitColConstrForm(MySQLParser::ColConstrFormContext *ctx) = 0;

  virtual void enterColConstrStorage(MySQLParser::ColConstrStorageContext *ctx) = 0;
  virtual void exitColConstrStorage(MySQLParser::ColConstrStorageContext *ctx) = 0;

  virtual void enterColConstrRefdef(MySQLParser::ColConstrRefdefContext *ctx) = 0;
  virtual void exitColConstrRefdef(MySQLParser::ColConstrRefdefContext *ctx) = 0;

  virtual void enterTblConstrPK(MySQLParser::TblConstrPKContext *ctx) = 0;
  virtual void exitTblConstrPK(MySQLParser::TblConstrPKContext *ctx) = 0;

  virtual void enterTblConstrUK(MySQLParser::TblConstrUKContext *ctx) = 0;
  virtual void exitTblConstrUK(MySQLParser::TblConstrUKContext *ctx) = 0;

  virtual void enterTblConstrFK(MySQLParser::TblConstrFKContext *ctx) = 0;
  virtual void exitTblConstrFK(MySQLParser::TblConstrFKContext *ctx) = 0;

  virtual void enterTblConstCheck(MySQLParser::TblConstCheckContext *ctx) = 0;
  virtual void exitTblConstCheck(MySQLParser::TblConstCheckContext *ctx) = 0;

  virtual void enterReference_definition(MySQLParser::Reference_definitionContext *ctx) = 0;
  virtual void exitReference_definition(MySQLParser::Reference_definitionContext *ctx) = 0;

  virtual void enterOn_delete_action(MySQLParser::On_delete_actionContext *ctx) = 0;
  virtual void exitOn_delete_action(MySQLParser::On_delete_actionContext *ctx) = 0;

  virtual void enterOn_update_action(MySQLParser::On_update_actionContext *ctx) = 0;
  virtual void exitOn_update_action(MySQLParser::On_update_actionContext *ctx) = 0;

  virtual void enterReference_action_control_type(MySQLParser::Reference_action_control_typeContext *ctx) = 0;
  virtual void exitReference_action_control_type(MySQLParser::Reference_action_control_typeContext *ctx) = 0;

  virtual void enterSimpleIndex(MySQLParser::SimpleIndexContext *ctx) = 0;
  virtual void exitSimpleIndex(MySQLParser::SimpleIndexContext *ctx) = 0;

  virtual void enterSpecIndex(MySQLParser::SpecIndexContext *ctx) = 0;
  virtual void exitSpecIndex(MySQLParser::SpecIndexContext *ctx) = 0;

  virtual void enterTblOptEngine(MySQLParser::TblOptEngineContext *ctx) = 0;
  virtual void exitTblOptEngine(MySQLParser::TblOptEngineContext *ctx) = 0;

  virtual void enterTblOptAuInc(MySQLParser::TblOptAuIncContext *ctx) = 0;
  virtual void exitTblOptAuInc(MySQLParser::TblOptAuIncContext *ctx) = 0;

  virtual void enterTblOptAvgRLen(MySQLParser::TblOptAvgRLenContext *ctx) = 0;
  virtual void exitTblOptAvgRLen(MySQLParser::TblOptAvgRLenContext *ctx) = 0;

  virtual void enterTblOptDefCharSet(MySQLParser::TblOptDefCharSetContext *ctx) = 0;
  virtual void exitTblOptDefCharSet(MySQLParser::TblOptDefCharSetContext *ctx) = 0;

  virtual void enterTblOptChkSum(MySQLParser::TblOptChkSumContext *ctx) = 0;
  virtual void exitTblOptChkSum(MySQLParser::TblOptChkSumContext *ctx) = 0;

  virtual void enterTblOptDefCollate(MySQLParser::TblOptDefCollateContext *ctx) = 0;
  virtual void exitTblOptDefCollate(MySQLParser::TblOptDefCollateContext *ctx) = 0;

  virtual void enterTblOptComment(MySQLParser::TblOptCommentContext *ctx) = 0;
  virtual void exitTblOptComment(MySQLParser::TblOptCommentContext *ctx) = 0;

  virtual void enterTblOptCompr(MySQLParser::TblOptComprContext *ctx) = 0;
  virtual void exitTblOptCompr(MySQLParser::TblOptComprContext *ctx) = 0;

  virtual void enterTblOptConn(MySQLParser::TblOptConnContext *ctx) = 0;
  virtual void exitTblOptConn(MySQLParser::TblOptConnContext *ctx) = 0;

  virtual void enterTblOptDataDir(MySQLParser::TblOptDataDirContext *ctx) = 0;
  virtual void exitTblOptDataDir(MySQLParser::TblOptDataDirContext *ctx) = 0;

  virtual void enterTblOptDelKW(MySQLParser::TblOptDelKWContext *ctx) = 0;
  virtual void exitTblOptDelKW(MySQLParser::TblOptDelKWContext *ctx) = 0;

  virtual void enterTblOptEncr(MySQLParser::TblOptEncrContext *ctx) = 0;
  virtual void exitTblOptEncr(MySQLParser::TblOptEncrContext *ctx) = 0;

  virtual void enterTblOptIndexDir(MySQLParser::TblOptIndexDirContext *ctx) = 0;
  virtual void exitTblOptIndexDir(MySQLParser::TblOptIndexDirContext *ctx) = 0;

  virtual void enterTblOptInsMeth(MySQLParser::TblOptInsMethContext *ctx) = 0;
  virtual void exitTblOptInsMeth(MySQLParser::TblOptInsMethContext *ctx) = 0;

  virtual void enterTblOptKeyBlockSz(MySQLParser::TblOptKeyBlockSzContext *ctx) = 0;
  virtual void exitTblOptKeyBlockSz(MySQLParser::TblOptKeyBlockSzContext *ctx) = 0;

  virtual void enterTblOptMaxRows(MySQLParser::TblOptMaxRowsContext *ctx) = 0;
  virtual void exitTblOptMaxRows(MySQLParser::TblOptMaxRowsContext *ctx) = 0;

  virtual void enterTblOptMinRows(MySQLParser::TblOptMinRowsContext *ctx) = 0;
  virtual void exitTblOptMinRows(MySQLParser::TblOptMinRowsContext *ctx) = 0;

  virtual void enterTblOptPackK(MySQLParser::TblOptPackKContext *ctx) = 0;
  virtual void exitTblOptPackK(MySQLParser::TblOptPackKContext *ctx) = 0;

  virtual void enterTblOptPasswd(MySQLParser::TblOptPasswdContext *ctx) = 0;
  virtual void exitTblOptPasswd(MySQLParser::TblOptPasswdContext *ctx) = 0;

  virtual void enterTblOptRowFormat(MySQLParser::TblOptRowFormatContext *ctx) = 0;
  virtual void exitTblOptRowFormat(MySQLParser::TblOptRowFormatContext *ctx) = 0;

  virtual void enterTblOptStatAutoR(MySQLParser::TblOptStatAutoRContext *ctx) = 0;
  virtual void exitTblOptStatAutoR(MySQLParser::TblOptStatAutoRContext *ctx) = 0;

  virtual void enterTblOptStatPersist(MySQLParser::TblOptStatPersistContext *ctx) = 0;
  virtual void exitTblOptStatPersist(MySQLParser::TblOptStatPersistContext *ctx) = 0;

  virtual void enterTblOptStatSamplPg(MySQLParser::TblOptStatSamplPgContext *ctx) = 0;
  virtual void exitTblOptStatSamplPg(MySQLParser::TblOptStatSamplPgContext *ctx) = 0;

  virtual void enterTblOptTablespace(MySQLParser::TblOptTablespaceContext *ctx) = 0;
  virtual void exitTblOptTablespace(MySQLParser::TblOptTablespaceContext *ctx) = 0;

  virtual void enterTblOptUnion(MySQLParser::TblOptUnionContext *ctx) = 0;
  virtual void exitTblOptUnion(MySQLParser::TblOptUnionContext *ctx) = 0;

  virtual void enterPartition_options(MySQLParser::Partition_optionsContext *ctx) = 0;
  virtual void exitPartition_options(MySQLParser::Partition_optionsContext *ctx) = 0;

  virtual void enterPartition_function_definition(MySQLParser::Partition_function_definitionContext *ctx) = 0;
  virtual void exitPartition_function_definition(MySQLParser::Partition_function_definitionContext *ctx) = 0;

  virtual void enterLinear_partition_func_def(MySQLParser::Linear_partition_func_defContext *ctx) = 0;
  virtual void exitLinear_partition_func_def(MySQLParser::Linear_partition_func_defContext *ctx) = 0;

  virtual void enterPartition_def(MySQLParser::Partition_defContext *ctx) = 0;
  virtual void exitPartition_def(MySQLParser::Partition_defContext *ctx) = 0;

  virtual void enterSubpartition_def(MySQLParser::Subpartition_defContext *ctx) = 0;
  virtual void exitSubpartition_def(MySQLParser::Subpartition_defContext *ctx) = 0;

  virtual void enterAlterDb(MySQLParser::AlterDbContext *ctx) = 0;
  virtual void exitAlterDb(MySQLParser::AlterDbContext *ctx) = 0;

  virtual void enterAlterDbUpgradeName(MySQLParser::AlterDbUpgradeNameContext *ctx) = 0;
  virtual void exitAlterDbUpgradeName(MySQLParser::AlterDbUpgradeNameContext *ctx) = 0;

  virtual void enterAlter_event(MySQLParser::Alter_eventContext *ctx) = 0;
  virtual void exitAlter_event(MySQLParser::Alter_eventContext *ctx) = 0;

  virtual void enterAlter_function(MySQLParser::Alter_functionContext *ctx) = 0;
  virtual void exitAlter_function(MySQLParser::Alter_functionContext *ctx) = 0;

  virtual void enterAlter_instance(MySQLParser::Alter_instanceContext *ctx) = 0;
  virtual void exitAlter_instance(MySQLParser::Alter_instanceContext *ctx) = 0;

  virtual void enterAlter_logfile_group(MySQLParser::Alter_logfile_groupContext *ctx) = 0;
  virtual void exitAlter_logfile_group(MySQLParser::Alter_logfile_groupContext *ctx) = 0;

  virtual void enterAlter_procedure(MySQLParser::Alter_procedureContext *ctx) = 0;
  virtual void exitAlter_procedure(MySQLParser::Alter_procedureContext *ctx) = 0;

  virtual void enterAlter_server(MySQLParser::Alter_serverContext *ctx) = 0;
  virtual void exitAlter_server(MySQLParser::Alter_serverContext *ctx) = 0;

  virtual void enterAlter_table(MySQLParser::Alter_tableContext *ctx) = 0;
  virtual void exitAlter_table(MySQLParser::Alter_tableContext *ctx) = 0;

  virtual void enterAlter_tablespace(MySQLParser::Alter_tablespaceContext *ctx) = 0;
  virtual void exitAlter_tablespace(MySQLParser::Alter_tablespaceContext *ctx) = 0;

  virtual void enterAlter_view(MySQLParser::Alter_viewContext *ctx) = 0;
  virtual void exitAlter_view(MySQLParser::Alter_viewContext *ctx) = 0;

  virtual void enterAltblTableOpt(MySQLParser::AltblTableOptContext *ctx) = 0;
  virtual void exitAltblTableOpt(MySQLParser::AltblTableOptContext *ctx) = 0;

  virtual void enterAltblAddCol(MySQLParser::AltblAddColContext *ctx) = 0;
  virtual void exitAltblAddCol(MySQLParser::AltblAddColContext *ctx) = 0;

  virtual void enterAltblAddCols(MySQLParser::AltblAddColsContext *ctx) = 0;
  virtual void exitAltblAddCols(MySQLParser::AltblAddColsContext *ctx) = 0;

  virtual void enterAltblAddIndex(MySQLParser::AltblAddIndexContext *ctx) = 0;
  virtual void exitAltblAddIndex(MySQLParser::AltblAddIndexContext *ctx) = 0;

  virtual void enterAltblAddPK(MySQLParser::AltblAddPKContext *ctx) = 0;
  virtual void exitAltblAddPK(MySQLParser::AltblAddPKContext *ctx) = 0;

  virtual void enterAltblAddUK(MySQLParser::AltblAddUKContext *ctx) = 0;
  virtual void exitAltblAddUK(MySQLParser::AltblAddUKContext *ctx) = 0;

  virtual void enterAltblAddSpecIndex(MySQLParser::AltblAddSpecIndexContext *ctx) = 0;
  virtual void exitAltblAddSpecIndex(MySQLParser::AltblAddSpecIndexContext *ctx) = 0;

  virtual void enterAltblAddFK(MySQLParser::AltblAddFKContext *ctx) = 0;
  virtual void exitAltblAddFK(MySQLParser::AltblAddFKContext *ctx) = 0;

  virtual void enterAltblAlg(MySQLParser::AltblAlgContext *ctx) = 0;
  virtual void exitAltblAlg(MySQLParser::AltblAlgContext *ctx) = 0;

  virtual void enterAltblColDef(MySQLParser::AltblColDefContext *ctx) = 0;
  virtual void exitAltblColDef(MySQLParser::AltblColDefContext *ctx) = 0;

  virtual void enterAltblColChange(MySQLParser::AltblColChangeContext *ctx) = 0;
  virtual void exitAltblColChange(MySQLParser::AltblColChangeContext *ctx) = 0;

  virtual void enterAltblLock(MySQLParser::AltblLockContext *ctx) = 0;
  virtual void exitAltblLock(MySQLParser::AltblLockContext *ctx) = 0;

  virtual void enterAltblColMod(MySQLParser::AltblColModContext *ctx) = 0;
  virtual void exitAltblColMod(MySQLParser::AltblColModContext *ctx) = 0;

  virtual void enterAltblColDrop(MySQLParser::AltblColDropContext *ctx) = 0;
  virtual void exitAltblColDrop(MySQLParser::AltblColDropContext *ctx) = 0;

  virtual void enterAltblDropPK(MySQLParser::AltblDropPKContext *ctx) = 0;
  virtual void exitAltblDropPK(MySQLParser::AltblDropPKContext *ctx) = 0;

  virtual void enterAltblDropIndex(MySQLParser::AltblDropIndexContext *ctx) = 0;
  virtual void exitAltblDropIndex(MySQLParser::AltblDropIndexContext *ctx) = 0;

  virtual void enterAltblDropFK(MySQLParser::AltblDropFKContext *ctx) = 0;
  virtual void exitAltblDropFK(MySQLParser::AltblDropFKContext *ctx) = 0;

  virtual void enterAltblDisKey(MySQLParser::AltblDisKeyContext *ctx) = 0;
  virtual void exitAltblDisKey(MySQLParser::AltblDisKeyContext *ctx) = 0;

  virtual void enterAltblEnKey(MySQLParser::AltblEnKeyContext *ctx) = 0;
  virtual void exitAltblEnKey(MySQLParser::AltblEnKeyContext *ctx) = 0;

  virtual void enterAltblRenameTbl(MySQLParser::AltblRenameTblContext *ctx) = 0;
  virtual void exitAltblRenameTbl(MySQLParser::AltblRenameTblContext *ctx) = 0;

  virtual void enterAltblResort(MySQLParser::AltblResortContext *ctx) = 0;
  virtual void exitAltblResort(MySQLParser::AltblResortContext *ctx) = 0;

  virtual void enterAltblConvert(MySQLParser::AltblConvertContext *ctx) = 0;
  virtual void exitAltblConvert(MySQLParser::AltblConvertContext *ctx) = 0;

  virtual void enterAltblDefCharset(MySQLParser::AltblDefCharsetContext *ctx) = 0;
  virtual void exitAltblDefCharset(MySQLParser::AltblDefCharsetContext *ctx) = 0;

  virtual void enterAltblDisTblspace(MySQLParser::AltblDisTblspaceContext *ctx) = 0;
  virtual void exitAltblDisTblspace(MySQLParser::AltblDisTblspaceContext *ctx) = 0;

  virtual void enterAltblImpTblSpace(MySQLParser::AltblImpTblSpaceContext *ctx) = 0;
  virtual void exitAltblImpTblSpace(MySQLParser::AltblImpTblSpaceContext *ctx) = 0;

  virtual void enterAltblForce(MySQLParser::AltblForceContext *ctx) = 0;
  virtual void exitAltblForce(MySQLParser::AltblForceContext *ctx) = 0;

  virtual void enterAltblValid(MySQLParser::AltblValidContext *ctx) = 0;
  virtual void exitAltblValid(MySQLParser::AltblValidContext *ctx) = 0;

  virtual void enterAltblAddPart(MySQLParser::AltblAddPartContext *ctx) = 0;
  virtual void exitAltblAddPart(MySQLParser::AltblAddPartContext *ctx) = 0;

  virtual void enterAltblDropPart(MySQLParser::AltblDropPartContext *ctx) = 0;
  virtual void exitAltblDropPart(MySQLParser::AltblDropPartContext *ctx) = 0;

  virtual void enterAltblDiscartPart(MySQLParser::AltblDiscartPartContext *ctx) = 0;
  virtual void exitAltblDiscartPart(MySQLParser::AltblDiscartPartContext *ctx) = 0;

  virtual void enterAltblImportPart(MySQLParser::AltblImportPartContext *ctx) = 0;
  virtual void exitAltblImportPart(MySQLParser::AltblImportPartContext *ctx) = 0;

  virtual void enterAltblTruncPart(MySQLParser::AltblTruncPartContext *ctx) = 0;
  virtual void exitAltblTruncPart(MySQLParser::AltblTruncPartContext *ctx) = 0;

  virtual void enterAltblCoalPart(MySQLParser::AltblCoalPartContext *ctx) = 0;
  virtual void exitAltblCoalPart(MySQLParser::AltblCoalPartContext *ctx) = 0;

  virtual void enterAltblReorgPart(MySQLParser::AltblReorgPartContext *ctx) = 0;
  virtual void exitAltblReorgPart(MySQLParser::AltblReorgPartContext *ctx) = 0;

  virtual void enterAltblExchPart(MySQLParser::AltblExchPartContext *ctx) = 0;
  virtual void exitAltblExchPart(MySQLParser::AltblExchPartContext *ctx) = 0;

  virtual void enterAltblAnalPart(MySQLParser::AltblAnalPartContext *ctx) = 0;
  virtual void exitAltblAnalPart(MySQLParser::AltblAnalPartContext *ctx) = 0;

  virtual void enterAltblCheckPart(MySQLParser::AltblCheckPartContext *ctx) = 0;
  virtual void exitAltblCheckPart(MySQLParser::AltblCheckPartContext *ctx) = 0;

  virtual void enterAltblOptimPart(MySQLParser::AltblOptimPartContext *ctx) = 0;
  virtual void exitAltblOptimPart(MySQLParser::AltblOptimPartContext *ctx) = 0;

  virtual void enterAltblRebuildPart(MySQLParser::AltblRebuildPartContext *ctx) = 0;
  virtual void exitAltblRebuildPart(MySQLParser::AltblRebuildPartContext *ctx) = 0;

  virtual void enterAltblRepairPart(MySQLParser::AltblRepairPartContext *ctx) = 0;
  virtual void exitAltblRepairPart(MySQLParser::AltblRepairPartContext *ctx) = 0;

  virtual void enterAltblRemovePart(MySQLParser::AltblRemovePartContext *ctx) = 0;
  virtual void exitAltblRemovePart(MySQLParser::AltblRemovePartContext *ctx) = 0;

  virtual void enterAltblUpgrPart(MySQLParser::AltblUpgrPartContext *ctx) = 0;
  virtual void exitAltblUpgrPart(MySQLParser::AltblUpgrPartContext *ctx) = 0;

  virtual void enterDrop_database(MySQLParser::Drop_databaseContext *ctx) = 0;
  virtual void exitDrop_database(MySQLParser::Drop_databaseContext *ctx) = 0;

  virtual void enterDrop_event(MySQLParser::Drop_eventContext *ctx) = 0;
  virtual void exitDrop_event(MySQLParser::Drop_eventContext *ctx) = 0;

  virtual void enterDrop_index(MySQLParser::Drop_indexContext *ctx) = 0;
  virtual void exitDrop_index(MySQLParser::Drop_indexContext *ctx) = 0;

  virtual void enterDrop_logfile_group(MySQLParser::Drop_logfile_groupContext *ctx) = 0;
  virtual void exitDrop_logfile_group(MySQLParser::Drop_logfile_groupContext *ctx) = 0;

  virtual void enterDrop_procedure(MySQLParser::Drop_procedureContext *ctx) = 0;
  virtual void exitDrop_procedure(MySQLParser::Drop_procedureContext *ctx) = 0;

  virtual void enterDrop_function(MySQLParser::Drop_functionContext *ctx) = 0;
  virtual void exitDrop_function(MySQLParser::Drop_functionContext *ctx) = 0;

  virtual void enterDrop_server(MySQLParser::Drop_serverContext *ctx) = 0;
  virtual void exitDrop_server(MySQLParser::Drop_serverContext *ctx) = 0;

  virtual void enterDrop_table(MySQLParser::Drop_tableContext *ctx) = 0;
  virtual void exitDrop_table(MySQLParser::Drop_tableContext *ctx) = 0;

  virtual void enterDrop_tablespace(MySQLParser::Drop_tablespaceContext *ctx) = 0;
  virtual void exitDrop_tablespace(MySQLParser::Drop_tablespaceContext *ctx) = 0;

  virtual void enterDrop_trigger(MySQLParser::Drop_triggerContext *ctx) = 0;
  virtual void exitDrop_trigger(MySQLParser::Drop_triggerContext *ctx) = 0;

  virtual void enterDrop_view(MySQLParser::Drop_viewContext *ctx) = 0;
  virtual void exitDrop_view(MySQLParser::Drop_viewContext *ctx) = 0;

  virtual void enterRename_table(MySQLParser::Rename_tableContext *ctx) = 0;
  virtual void exitRename_table(MySQLParser::Rename_tableContext *ctx) = 0;

  virtual void enterTruncate_table(MySQLParser::Truncate_tableContext *ctx) = 0;
  virtual void exitTruncate_table(MySQLParser::Truncate_tableContext *ctx) = 0;

  virtual void enterCall_statement(MySQLParser::Call_statementContext *ctx) = 0;
  virtual void exitCall_statement(MySQLParser::Call_statementContext *ctx) = 0;

  virtual void enterDelete_statement(MySQLParser::Delete_statementContext *ctx) = 0;
  virtual void exitDelete_statement(MySQLParser::Delete_statementContext *ctx) = 0;

  virtual void enterDo_statement(MySQLParser::Do_statementContext *ctx) = 0;
  virtual void exitDo_statement(MySQLParser::Do_statementContext *ctx) = 0;

  virtual void enterHandler_statement(MySQLParser::Handler_statementContext *ctx) = 0;
  virtual void exitHandler_statement(MySQLParser::Handler_statementContext *ctx) = 0;

  virtual void enterInsert_statement(MySQLParser::Insert_statementContext *ctx) = 0;
  virtual void exitInsert_statement(MySQLParser::Insert_statementContext *ctx) = 0;

  virtual void enterLoad_data_statement(MySQLParser::Load_data_statementContext *ctx) = 0;
  virtual void exitLoad_data_statement(MySQLParser::Load_data_statementContext *ctx) = 0;

  virtual void enterLoad_xml_statement(MySQLParser::Load_xml_statementContext *ctx) = 0;
  virtual void exitLoad_xml_statement(MySQLParser::Load_xml_statementContext *ctx) = 0;

  virtual void enterReplace_statement(MySQLParser::Replace_statementContext *ctx) = 0;
  virtual void exitReplace_statement(MySQLParser::Replace_statementContext *ctx) = 0;

  virtual void enterSimpleSelect(MySQLParser::SimpleSelectContext *ctx) = 0;
  virtual void exitSimpleSelect(MySQLParser::SimpleSelectContext *ctx) = 0;

  virtual void enterParenSelect(MySQLParser::ParenSelectContext *ctx) = 0;
  virtual void exitParenSelect(MySQLParser::ParenSelectContext *ctx) = 0;

  virtual void enterUnionSelect(MySQLParser::UnionSelectContext *ctx) = 0;
  virtual void exitUnionSelect(MySQLParser::UnionSelectContext *ctx) = 0;

  virtual void enterUnionParenSelect(MySQLParser::UnionParenSelectContext *ctx) = 0;
  virtual void exitUnionParenSelect(MySQLParser::UnionParenSelectContext *ctx) = 0;

  virtual void enterUpdate_statement(MySQLParser::Update_statementContext *ctx) = 0;
  virtual void exitUpdate_statement(MySQLParser::Update_statementContext *ctx) = 0;

  virtual void enterInsert_statement_value(MySQLParser::Insert_statement_valueContext *ctx) = 0;
  virtual void exitInsert_statement_value(MySQLParser::Insert_statement_valueContext *ctx) = 0;

  virtual void enterUpdate_elem(MySQLParser::Update_elemContext *ctx) = 0;
  virtual void exitUpdate_elem(MySQLParser::Update_elemContext *ctx) = 0;

  virtual void enterCol_or_uservar(MySQLParser::Col_or_uservarContext *ctx) = 0;
  virtual void exitCol_or_uservar(MySQLParser::Col_or_uservarContext *ctx) = 0;

  virtual void enterSingle_delete_statement(MySQLParser::Single_delete_statementContext *ctx) = 0;
  virtual void exitSingle_delete_statement(MySQLParser::Single_delete_statementContext *ctx) = 0;

  virtual void enterMultiple_delete_statement(MySQLParser::Multiple_delete_statementContext *ctx) = 0;
  virtual void exitMultiple_delete_statement(MySQLParser::Multiple_delete_statementContext *ctx) = 0;

  virtual void enterHandler_open_statement(MySQLParser::Handler_open_statementContext *ctx) = 0;
  virtual void exitHandler_open_statement(MySQLParser::Handler_open_statementContext *ctx) = 0;

  virtual void enterHandler_read_index_statement(MySQLParser::Handler_read_index_statementContext *ctx) = 0;
  virtual void exitHandler_read_index_statement(MySQLParser::Handler_read_index_statementContext *ctx) = 0;

  virtual void enterHandler_read_statement(MySQLParser::Handler_read_statementContext *ctx) = 0;
  virtual void exitHandler_read_statement(MySQLParser::Handler_read_statementContext *ctx) = 0;

  virtual void enterHandler_close_statement(MySQLParser::Handler_close_statementContext *ctx) = 0;
  virtual void exitHandler_close_statement(MySQLParser::Handler_close_statementContext *ctx) = 0;

  virtual void enterSingle_update_statement(MySQLParser::Single_update_statementContext *ctx) = 0;
  virtual void exitSingle_update_statement(MySQLParser::Single_update_statementContext *ctx) = 0;

  virtual void enterMultiple_update_statement(MySQLParser::Multiple_update_statementContext *ctx) = 0;
  virtual void exitMultiple_update_statement(MySQLParser::Multiple_update_statementContext *ctx) = 0;

  virtual void enterOrder_by_clause(MySQLParser::Order_by_clauseContext *ctx) = 0;
  virtual void exitOrder_by_clause(MySQLParser::Order_by_clauseContext *ctx) = 0;

  virtual void enterOrder_by_expression(MySQLParser::Order_by_expressionContext *ctx) = 0;
  virtual void exitOrder_by_expression(MySQLParser::Order_by_expressionContext *ctx) = 0;

  virtual void enterTable_sources(MySQLParser::Table_sourcesContext *ctx) = 0;
  virtual void exitTable_sources(MySQLParser::Table_sourcesContext *ctx) = 0;

  virtual void enterTable_source(MySQLParser::Table_sourceContext *ctx) = 0;
  virtual void exitTable_source(MySQLParser::Table_sourceContext *ctx) = 0;

  virtual void enterAtomTableItem(MySQLParser::AtomTableItemContext *ctx) = 0;
  virtual void exitAtomTableItem(MySQLParser::AtomTableItemContext *ctx) = 0;

  virtual void enterSubqueryTableItem(MySQLParser::SubqueryTableItemContext *ctx) = 0;
  virtual void exitSubqueryTableItem(MySQLParser::SubqueryTableItemContext *ctx) = 0;

  virtual void enterTableSourcesItem(MySQLParser::TableSourcesItemContext *ctx) = 0;
  virtual void exitTableSourcesItem(MySQLParser::TableSourcesItemContext *ctx) = 0;

  virtual void enterIndex_hint(MySQLParser::Index_hintContext *ctx) = 0;
  virtual void exitIndex_hint(MySQLParser::Index_hintContext *ctx) = 0;

  virtual void enterInnerJoin(MySQLParser::InnerJoinContext *ctx) = 0;
  virtual void exitInnerJoin(MySQLParser::InnerJoinContext *ctx) = 0;

  virtual void enterStraightJoin(MySQLParser::StraightJoinContext *ctx) = 0;
  virtual void exitStraightJoin(MySQLParser::StraightJoinContext *ctx) = 0;

  virtual void enterOuterJoin(MySQLParser::OuterJoinContext *ctx) = 0;
  virtual void exitOuterJoin(MySQLParser::OuterJoinContext *ctx) = 0;

  virtual void enterNaturalJoin(MySQLParser::NaturalJoinContext *ctx) = 0;
  virtual void exitNaturalJoin(MySQLParser::NaturalJoinContext *ctx) = 0;

  virtual void enterSubquery(MySQLParser::SubqueryContext *ctx) = 0;
  virtual void exitSubquery(MySQLParser::SubqueryContext *ctx) = 0;

  virtual void enterQuery_expression(MySQLParser::Query_expressionContext *ctx) = 0;
  virtual void exitQuery_expression(MySQLParser::Query_expressionContext *ctx) = 0;

  virtual void enterQuery_expression_nointo(MySQLParser::Query_expression_nointoContext *ctx) = 0;
  virtual void exitQuery_expression_nointo(MySQLParser::Query_expression_nointoContext *ctx) = 0;

  virtual void enterQuery_specification(MySQLParser::Query_specificationContext *ctx) = 0;
  virtual void exitQuery_specification(MySQLParser::Query_specificationContext *ctx) = 0;

  virtual void enterQuery_specification_nointo(MySQLParser::Query_specification_nointoContext *ctx) = 0;
  virtual void exitQuery_specification_nointo(MySQLParser::Query_specification_nointoContext *ctx) = 0;

  virtual void enterUnion_parenth(MySQLParser::Union_parenthContext *ctx) = 0;
  virtual void exitUnion_parenth(MySQLParser::Union_parenthContext *ctx) = 0;

  virtual void enterUnion_statement(MySQLParser::Union_statementContext *ctx) = 0;
  virtual void exitUnion_statement(MySQLParser::Union_statementContext *ctx) = 0;

  virtual void enterSelect_spec(MySQLParser::Select_specContext *ctx) = 0;
  virtual void exitSelect_spec(MySQLParser::Select_specContext *ctx) = 0;

  virtual void enterSelect_list(MySQLParser::Select_listContext *ctx) = 0;
  virtual void exitSelect_list(MySQLParser::Select_listContext *ctx) = 0;

  virtual void enterSellistelAllCol(MySQLParser::SellistelAllColContext *ctx) = 0;
  virtual void exitSellistelAllCol(MySQLParser::SellistelAllColContext *ctx) = 0;

  virtual void enterSellistelCol(MySQLParser::SellistelColContext *ctx) = 0;
  virtual void exitSellistelCol(MySQLParser::SellistelColContext *ctx) = 0;

  virtual void enterSellistelFunc(MySQLParser::SellistelFuncContext *ctx) = 0;
  virtual void exitSellistelFunc(MySQLParser::SellistelFuncContext *ctx) = 0;

  virtual void enterSellistelExpr(MySQLParser::SellistelExprContext *ctx) = 0;
  virtual void exitSellistelExpr(MySQLParser::SellistelExprContext *ctx) = 0;

  virtual void enterSelectIntoVars(MySQLParser::SelectIntoVarsContext *ctx) = 0;
  virtual void exitSelectIntoVars(MySQLParser::SelectIntoVarsContext *ctx) = 0;

  virtual void enterSelectIntoDump(MySQLParser::SelectIntoDumpContext *ctx) = 0;
  virtual void exitSelectIntoDump(MySQLParser::SelectIntoDumpContext *ctx) = 0;

  virtual void enterSelectIntoOutfile(MySQLParser::SelectIntoOutfileContext *ctx) = 0;
  virtual void exitSelectIntoOutfile(MySQLParser::SelectIntoOutfileContext *ctx) = 0;

  virtual void enterFrom_clause(MySQLParser::From_clauseContext *ctx) = 0;
  virtual void exitFrom_clause(MySQLParser::From_clauseContext *ctx) = 0;

  virtual void enterGroup_by_item(MySQLParser::Group_by_itemContext *ctx) = 0;
  virtual void exitGroup_by_item(MySQLParser::Group_by_itemContext *ctx) = 0;

  virtual void enterLimit_clause(MySQLParser::Limit_clauseContext *ctx) = 0;
  virtual void exitLimit_clause(MySQLParser::Limit_clauseContext *ctx) = 0;

  virtual void enterStart_transaction(MySQLParser::Start_transactionContext *ctx) = 0;
  virtual void exitStart_transaction(MySQLParser::Start_transactionContext *ctx) = 0;

  virtual void enterBegin_work(MySQLParser::Begin_workContext *ctx) = 0;
  virtual void exitBegin_work(MySQLParser::Begin_workContext *ctx) = 0;

  virtual void enterCommit_work(MySQLParser::Commit_workContext *ctx) = 0;
  virtual void exitCommit_work(MySQLParser::Commit_workContext *ctx) = 0;

  virtual void enterRollback_work(MySQLParser::Rollback_workContext *ctx) = 0;
  virtual void exitRollback_work(MySQLParser::Rollback_workContext *ctx) = 0;

  virtual void enterSavepoint_statement(MySQLParser::Savepoint_statementContext *ctx) = 0;
  virtual void exitSavepoint_statement(MySQLParser::Savepoint_statementContext *ctx) = 0;

  virtual void enterRollback_statement(MySQLParser::Rollback_statementContext *ctx) = 0;
  virtual void exitRollback_statement(MySQLParser::Rollback_statementContext *ctx) = 0;

  virtual void enterRelease_statement(MySQLParser::Release_statementContext *ctx) = 0;
  virtual void exitRelease_statement(MySQLParser::Release_statementContext *ctx) = 0;

  virtual void enterLock_tables(MySQLParser::Lock_tablesContext *ctx) = 0;
  virtual void exitLock_tables(MySQLParser::Lock_tablesContext *ctx) = 0;

  virtual void enterUnlock_tables(MySQLParser::Unlock_tablesContext *ctx) = 0;
  virtual void exitUnlock_tables(MySQLParser::Unlock_tablesContext *ctx) = 0;

  virtual void enterSet_autocommit_statement(MySQLParser::Set_autocommit_statementContext *ctx) = 0;
  virtual void exitSet_autocommit_statement(MySQLParser::Set_autocommit_statementContext *ctx) = 0;

  virtual void enterSet_transaction_statement(MySQLParser::Set_transaction_statementContext *ctx) = 0;
  virtual void exitSet_transaction_statement(MySQLParser::Set_transaction_statementContext *ctx) = 0;

  virtual void enterTransact_option(MySQLParser::Transact_optionContext *ctx) = 0;
  virtual void exitTransact_option(MySQLParser::Transact_optionContext *ctx) = 0;

  virtual void enterLock_table_element(MySQLParser::Lock_table_elementContext *ctx) = 0;
  virtual void exitLock_table_element(MySQLParser::Lock_table_elementContext *ctx) = 0;

  virtual void enterTrans_characteristic(MySQLParser::Trans_characteristicContext *ctx) = 0;
  virtual void exitTrans_characteristic(MySQLParser::Trans_characteristicContext *ctx) = 0;

  virtual void enterTransaction_level(MySQLParser::Transaction_levelContext *ctx) = 0;
  virtual void exitTransaction_level(MySQLParser::Transaction_levelContext *ctx) = 0;

  virtual void enterChange_master(MySQLParser::Change_masterContext *ctx) = 0;
  virtual void exitChange_master(MySQLParser::Change_masterContext *ctx) = 0;

  virtual void enterChange_repl_filter(MySQLParser::Change_repl_filterContext *ctx) = 0;
  virtual void exitChange_repl_filter(MySQLParser::Change_repl_filterContext *ctx) = 0;

  virtual void enterPurge_binary_logs(MySQLParser::Purge_binary_logsContext *ctx) = 0;
  virtual void exitPurge_binary_logs(MySQLParser::Purge_binary_logsContext *ctx) = 0;

  virtual void enterReset_master(MySQLParser::Reset_masterContext *ctx) = 0;
  virtual void exitReset_master(MySQLParser::Reset_masterContext *ctx) = 0;

  virtual void enterReset_slave(MySQLParser::Reset_slaveContext *ctx) = 0;
  virtual void exitReset_slave(MySQLParser::Reset_slaveContext *ctx) = 0;

  virtual void enterStart_slave(MySQLParser::Start_slaveContext *ctx) = 0;
  virtual void exitStart_slave(MySQLParser::Start_slaveContext *ctx) = 0;

  virtual void enterStop_slave(MySQLParser::Stop_slaveContext *ctx) = 0;
  virtual void exitStop_slave(MySQLParser::Stop_slaveContext *ctx) = 0;

  virtual void enterStart_group_repl(MySQLParser::Start_group_replContext *ctx) = 0;
  virtual void exitStart_group_repl(MySQLParser::Start_group_replContext *ctx) = 0;

  virtual void enterStop_group_repl(MySQLParser::Stop_group_replContext *ctx) = 0;
  virtual void exitStop_group_repl(MySQLParser::Stop_group_replContext *ctx) = 0;

  virtual void enterMasterOptString(MySQLParser::MasterOptStringContext *ctx) = 0;
  virtual void exitMasterOptString(MySQLParser::MasterOptStringContext *ctx) = 0;

  virtual void enterMasterOptDecimal(MySQLParser::MasterOptDecimalContext *ctx) = 0;
  virtual void exitMasterOptDecimal(MySQLParser::MasterOptDecimalContext *ctx) = 0;

  virtual void enterMasterOptBool(MySQLParser::MasterOptBoolContext *ctx) = 0;
  virtual void exitMasterOptBool(MySQLParser::MasterOptBoolContext *ctx) = 0;

  virtual void enterMasterOptReal(MySQLParser::MasterOptRealContext *ctx) = 0;
  virtual void exitMasterOptReal(MySQLParser::MasterOptRealContext *ctx) = 0;

  virtual void enterMasterOptIdList(MySQLParser::MasterOptIdListContext *ctx) = 0;
  virtual void exitMasterOptIdList(MySQLParser::MasterOptIdListContext *ctx) = 0;

  virtual void enterString_master_option(MySQLParser::String_master_optionContext *ctx) = 0;
  virtual void exitString_master_option(MySQLParser::String_master_optionContext *ctx) = 0;

  virtual void enterDecimal_master_option(MySQLParser::Decimal_master_optionContext *ctx) = 0;
  virtual void exitDecimal_master_option(MySQLParser::Decimal_master_optionContext *ctx) = 0;

  virtual void enterBool_master_option(MySQLParser::Bool_master_optionContext *ctx) = 0;
  virtual void exitBool_master_option(MySQLParser::Bool_master_optionContext *ctx) = 0;

  virtual void enterChannel_option(MySQLParser::Channel_optionContext *ctx) = 0;
  virtual void exitChannel_option(MySQLParser::Channel_optionContext *ctx) = 0;

  virtual void enterReplfilterDbList(MySQLParser::ReplfilterDbListContext *ctx) = 0;
  virtual void exitReplfilterDbList(MySQLParser::ReplfilterDbListContext *ctx) = 0;

  virtual void enterReplfilterTableList(MySQLParser::ReplfilterTableListContext *ctx) = 0;
  virtual void exitReplfilterTableList(MySQLParser::ReplfilterTableListContext *ctx) = 0;

  virtual void enterReplfilterStableList(MySQLParser::ReplfilterStableListContext *ctx) = 0;
  virtual void exitReplfilterStableList(MySQLParser::ReplfilterStableListContext *ctx) = 0;

  virtual void enterReplfilterTablepairList(MySQLParser::ReplfilterTablepairListContext *ctx) = 0;
  virtual void exitReplfilterTablepairList(MySQLParser::ReplfilterTablepairListContext *ctx) = 0;

  virtual void enterThread_type(MySQLParser::Thread_typeContext *ctx) = 0;
  virtual void exitThread_type(MySQLParser::Thread_typeContext *ctx) = 0;

  virtual void enterUntilGtidSset(MySQLParser::UntilGtidSsetContext *ctx) = 0;
  virtual void exitUntilGtidSset(MySQLParser::UntilGtidSsetContext *ctx) = 0;

  virtual void enterUntilMasterLog(MySQLParser::UntilMasterLogContext *ctx) = 0;
  virtual void exitUntilMasterLog(MySQLParser::UntilMasterLogContext *ctx) = 0;

  virtual void enterUntilRelayLog(MySQLParser::UntilRelayLogContext *ctx) = 0;
  virtual void exitUntilRelayLog(MySQLParser::UntilRelayLogContext *ctx) = 0;

  virtual void enterUntilSqlGaps(MySQLParser::UntilSqlGapsContext *ctx) = 0;
  virtual void exitUntilSqlGaps(MySQLParser::UntilSqlGapsContext *ctx) = 0;

  virtual void enterStart_slave_connection_option(MySQLParser::Start_slave_connection_optionContext *ctx) = 0;
  virtual void exitStart_slave_connection_option(MySQLParser::Start_slave_connection_optionContext *ctx) = 0;

  virtual void enterGtid_set(MySQLParser::Gtid_setContext *ctx) = 0;
  virtual void exitGtid_set(MySQLParser::Gtid_setContext *ctx) = 0;

  virtual void enterXa_start_transaction(MySQLParser::Xa_start_transactionContext *ctx) = 0;
  virtual void exitXa_start_transaction(MySQLParser::Xa_start_transactionContext *ctx) = 0;

  virtual void enterXa_end_transaction(MySQLParser::Xa_end_transactionContext *ctx) = 0;
  virtual void exitXa_end_transaction(MySQLParser::Xa_end_transactionContext *ctx) = 0;

  virtual void enterXa_prepare(MySQLParser::Xa_prepareContext *ctx) = 0;
  virtual void exitXa_prepare(MySQLParser::Xa_prepareContext *ctx) = 0;

  virtual void enterXa_commit_work(MySQLParser::Xa_commit_workContext *ctx) = 0;
  virtual void exitXa_commit_work(MySQLParser::Xa_commit_workContext *ctx) = 0;

  virtual void enterXa_rollback_work(MySQLParser::Xa_rollback_workContext *ctx) = 0;
  virtual void exitXa_rollback_work(MySQLParser::Xa_rollback_workContext *ctx) = 0;

  virtual void enterXa_recover_work(MySQLParser::Xa_recover_workContext *ctx) = 0;
  virtual void exitXa_recover_work(MySQLParser::Xa_recover_workContext *ctx) = 0;

  virtual void enterPrepare_statement(MySQLParser::Prepare_statementContext *ctx) = 0;
  virtual void exitPrepare_statement(MySQLParser::Prepare_statementContext *ctx) = 0;

  virtual void enterExecute_statement(MySQLParser::Execute_statementContext *ctx) = 0;
  virtual void exitExecute_statement(MySQLParser::Execute_statementContext *ctx) = 0;

  virtual void enterDeallocate_prepare(MySQLParser::Deallocate_prepareContext *ctx) = 0;
  virtual void exitDeallocate_prepare(MySQLParser::Deallocate_prepareContext *ctx) = 0;

  virtual void enterRoutine_body(MySQLParser::Routine_bodyContext *ctx) = 0;
  virtual void exitRoutine_body(MySQLParser::Routine_bodyContext *ctx) = 0;

  virtual void enterBlock_statement(MySQLParser::Block_statementContext *ctx) = 0;
  virtual void exitBlock_statement(MySQLParser::Block_statementContext *ctx) = 0;

  virtual void enterCase_statement(MySQLParser::Case_statementContext *ctx) = 0;
  virtual void exitCase_statement(MySQLParser::Case_statementContext *ctx) = 0;

  virtual void enterIf_statement(MySQLParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(MySQLParser::If_statementContext *ctx) = 0;

  virtual void enterIterate_statement(MySQLParser::Iterate_statementContext *ctx) = 0;
  virtual void exitIterate_statement(MySQLParser::Iterate_statementContext *ctx) = 0;

  virtual void enterLeave_statement(MySQLParser::Leave_statementContext *ctx) = 0;
  virtual void exitLeave_statement(MySQLParser::Leave_statementContext *ctx) = 0;

  virtual void enterLoop_statement(MySQLParser::Loop_statementContext *ctx) = 0;
  virtual void exitLoop_statement(MySQLParser::Loop_statementContext *ctx) = 0;

  virtual void enterRepeat_statement(MySQLParser::Repeat_statementContext *ctx) = 0;
  virtual void exitRepeat_statement(MySQLParser::Repeat_statementContext *ctx) = 0;

  virtual void enterReturn_statement(MySQLParser::Return_statementContext *ctx) = 0;
  virtual void exitReturn_statement(MySQLParser::Return_statementContext *ctx) = 0;

  virtual void enterWhile_statement(MySQLParser::While_statementContext *ctx) = 0;
  virtual void exitWhile_statement(MySQLParser::While_statementContext *ctx) = 0;

  virtual void enterCursor_statement(MySQLParser::Cursor_statementContext *ctx) = 0;
  virtual void exitCursor_statement(MySQLParser::Cursor_statementContext *ctx) = 0;

  virtual void enterDeclare_variable(MySQLParser::Declare_variableContext *ctx) = 0;
  virtual void exitDeclare_variable(MySQLParser::Declare_variableContext *ctx) = 0;

  virtual void enterDeclare_condition(MySQLParser::Declare_conditionContext *ctx) = 0;
  virtual void exitDeclare_condition(MySQLParser::Declare_conditionContext *ctx) = 0;

  virtual void enterDeclare_cursor(MySQLParser::Declare_cursorContext *ctx) = 0;
  virtual void exitDeclare_cursor(MySQLParser::Declare_cursorContext *ctx) = 0;

  virtual void enterDeclare_handler(MySQLParser::Declare_handlerContext *ctx) = 0;
  virtual void exitDeclare_handler(MySQLParser::Declare_handlerContext *ctx) = 0;

  virtual void enterHandler_condition_value(MySQLParser::Handler_condition_valueContext *ctx) = 0;
  virtual void exitHandler_condition_value(MySQLParser::Handler_condition_valueContext *ctx) = 0;

  virtual void enterProcedure_sql_statement(MySQLParser::Procedure_sql_statementContext *ctx) = 0;
  virtual void exitProcedure_sql_statement(MySQLParser::Procedure_sql_statementContext *ctx) = 0;

  virtual void enterAlterUserMysql56(MySQLParser::AlterUserMysql56Context *ctx) = 0;
  virtual void exitAlterUserMysql56(MySQLParser::AlterUserMysql56Context *ctx) = 0;

  virtual void enterAlterUserMysql57(MySQLParser::AlterUserMysql57Context *ctx) = 0;
  virtual void exitAlterUserMysql57(MySQLParser::AlterUserMysql57Context *ctx) = 0;

  virtual void enterCreateUserMysql56(MySQLParser::CreateUserMysql56Context *ctx) = 0;
  virtual void exitCreateUserMysql56(MySQLParser::CreateUserMysql56Context *ctx) = 0;

  virtual void enterCreateUserMysql57(MySQLParser::CreateUserMysql57Context *ctx) = 0;
  virtual void exitCreateUserMysql57(MySQLParser::CreateUserMysql57Context *ctx) = 0;

  virtual void enterDrop_user(MySQLParser::Drop_userContext *ctx) = 0;
  virtual void exitDrop_user(MySQLParser::Drop_userContext *ctx) = 0;

  virtual void enterGrant_statement(MySQLParser::Grant_statementContext *ctx) = 0;
  virtual void exitGrant_statement(MySQLParser::Grant_statementContext *ctx) = 0;

  virtual void enterGrant_proxy(MySQLParser::Grant_proxyContext *ctx) = 0;
  virtual void exitGrant_proxy(MySQLParser::Grant_proxyContext *ctx) = 0;

  virtual void enterRename_user(MySQLParser::Rename_userContext *ctx) = 0;
  virtual void exitRename_user(MySQLParser::Rename_userContext *ctx) = 0;

  virtual void enterDetailRevoke(MySQLParser::DetailRevokeContext *ctx) = 0;
  virtual void exitDetailRevoke(MySQLParser::DetailRevokeContext *ctx) = 0;

  virtual void enterShortRevoke(MySQLParser::ShortRevokeContext *ctx) = 0;
  virtual void exitShortRevoke(MySQLParser::ShortRevokeContext *ctx) = 0;

  virtual void enterRevoke_proxy(MySQLParser::Revoke_proxyContext *ctx) = 0;
  virtual void exitRevoke_proxy(MySQLParser::Revoke_proxyContext *ctx) = 0;

  virtual void enterSet_password_statement(MySQLParser::Set_password_statementContext *ctx) = 0;
  virtual void exitSet_password_statement(MySQLParser::Set_password_statementContext *ctx) = 0;

  virtual void enterUser_password_option(MySQLParser::User_password_optionContext *ctx) = 0;
  virtual void exitUser_password_option(MySQLParser::User_password_optionContext *ctx) = 0;

  virtual void enterAuthByPassword(MySQLParser::AuthByPasswordContext *ctx) = 0;
  virtual void exitAuthByPassword(MySQLParser::AuthByPasswordContext *ctx) = 0;

  virtual void enterAuthByString(MySQLParser::AuthByStringContext *ctx) = 0;
  virtual void exitAuthByString(MySQLParser::AuthByStringContext *ctx) = 0;

  virtual void enterAuthByHash(MySQLParser::AuthByHashContext *ctx) = 0;
  virtual void exitAuthByHash(MySQLParser::AuthByHashContext *ctx) = 0;

  virtual void enterTls_option(MySQLParser::Tls_optionContext *ctx) = 0;
  virtual void exitTls_option(MySQLParser::Tls_optionContext *ctx) = 0;

  virtual void enterUser_resource_option(MySQLParser::User_resource_optionContext *ctx) = 0;
  virtual void exitUser_resource_option(MySQLParser::User_resource_optionContext *ctx) = 0;

  virtual void enterUser_lock_option(MySQLParser::User_lock_optionContext *ctx) = 0;
  virtual void exitUser_lock_option(MySQLParser::User_lock_optionContext *ctx) = 0;

  virtual void enterPrivelege_clause(MySQLParser::Privelege_clauseContext *ctx) = 0;
  virtual void exitPrivelege_clause(MySQLParser::Privelege_clauseContext *ctx) = 0;

  virtual void enterPrivilege(MySQLParser::PrivilegeContext *ctx) = 0;
  virtual void exitPrivilege(MySQLParser::PrivilegeContext *ctx) = 0;

  virtual void enterPrivilege_level(MySQLParser::Privilege_levelContext *ctx) = 0;
  virtual void exitPrivilege_level(MySQLParser::Privilege_levelContext *ctx) = 0;

  virtual void enterSet_password_option(MySQLParser::Set_password_optionContext *ctx) = 0;
  virtual void exitSet_password_option(MySQLParser::Set_password_optionContext *ctx) = 0;

  virtual void enterAnalyze_table(MySQLParser::Analyze_tableContext *ctx) = 0;
  virtual void exitAnalyze_table(MySQLParser::Analyze_tableContext *ctx) = 0;

  virtual void enterCheck_table(MySQLParser::Check_tableContext *ctx) = 0;
  virtual void exitCheck_table(MySQLParser::Check_tableContext *ctx) = 0;

  virtual void enterChecksum_table(MySQLParser::Checksum_tableContext *ctx) = 0;
  virtual void exitChecksum_table(MySQLParser::Checksum_tableContext *ctx) = 0;

  virtual void enterOptimize_table(MySQLParser::Optimize_tableContext *ctx) = 0;
  virtual void exitOptimize_table(MySQLParser::Optimize_tableContext *ctx) = 0;

  virtual void enterRepair_table(MySQLParser::Repair_tableContext *ctx) = 0;
  virtual void exitRepair_table(MySQLParser::Repair_tableContext *ctx) = 0;

  virtual void enterCheck_table_option(MySQLParser::Check_table_optionContext *ctx) = 0;
  virtual void exitCheck_table_option(MySQLParser::Check_table_optionContext *ctx) = 0;

  virtual void enterCreate_udfunction(MySQLParser::Create_udfunctionContext *ctx) = 0;
  virtual void exitCreate_udfunction(MySQLParser::Create_udfunctionContext *ctx) = 0;

  virtual void enterInstall_plugin(MySQLParser::Install_pluginContext *ctx) = 0;
  virtual void exitInstall_plugin(MySQLParser::Install_pluginContext *ctx) = 0;

  virtual void enterUninstall_plugin(MySQLParser::Uninstall_pluginContext *ctx) = 0;
  virtual void exitUninstall_plugin(MySQLParser::Uninstall_pluginContext *ctx) = 0;

  virtual void enterSetVariableAssignment(MySQLParser::SetVariableAssignmentContext *ctx) = 0;
  virtual void exitSetVariableAssignment(MySQLParser::SetVariableAssignmentContext *ctx) = 0;

  virtual void enterSetCharset(MySQLParser::SetCharsetContext *ctx) = 0;
  virtual void exitSetCharset(MySQLParser::SetCharsetContext *ctx) = 0;

  virtual void enterSetNames(MySQLParser::SetNamesContext *ctx) = 0;
  virtual void exitSetNames(MySQLParser::SetNamesContext *ctx) = 0;

  virtual void enterSetPasswordStatement(MySQLParser::SetPasswordStatementContext *ctx) = 0;
  virtual void exitSetPasswordStatement(MySQLParser::SetPasswordStatementContext *ctx) = 0;

  virtual void enterSetTransaction(MySQLParser::SetTransactionContext *ctx) = 0;
  virtual void exitSetTransaction(MySQLParser::SetTransactionContext *ctx) = 0;

  virtual void enterSetAutocommit(MySQLParser::SetAutocommitContext *ctx) = 0;
  virtual void exitSetAutocommit(MySQLParser::SetAutocommitContext *ctx) = 0;

  virtual void enterShowMasterlogs(MySQLParser::ShowMasterlogsContext *ctx) = 0;
  virtual void exitShowMasterlogs(MySQLParser::ShowMasterlogsContext *ctx) = 0;

  virtual void enterShowLogevents(MySQLParser::ShowLogeventsContext *ctx) = 0;
  virtual void exitShowLogevents(MySQLParser::ShowLogeventsContext *ctx) = 0;

  virtual void enterShowObjWithFilter(MySQLParser::ShowObjWithFilterContext *ctx) = 0;
  virtual void exitShowObjWithFilter(MySQLParser::ShowObjWithFilterContext *ctx) = 0;

  virtual void enterShowColumns(MySQLParser::ShowColumnsContext *ctx) = 0;
  virtual void exitShowColumns(MySQLParser::ShowColumnsContext *ctx) = 0;

  virtual void enterShowCreateDb(MySQLParser::ShowCreateDbContext *ctx) = 0;
  virtual void exitShowCreateDb(MySQLParser::ShowCreateDbContext *ctx) = 0;

  virtual void enterShowCreateFullidobj(MySQLParser::ShowCreateFullidobjContext *ctx) = 0;
  virtual void exitShowCreateFullidobj(MySQLParser::ShowCreateFullidobjContext *ctx) = 0;

  virtual void enterShowCreateUser(MySQLParser::ShowCreateUserContext *ctx) = 0;
  virtual void exitShowCreateUser(MySQLParser::ShowCreateUserContext *ctx) = 0;

  virtual void enterShowEngine(MySQLParser::ShowEngineContext *ctx) = 0;
  virtual void exitShowEngine(MySQLParser::ShowEngineContext *ctx) = 0;

  virtual void enterShowGlobalinfo(MySQLParser::ShowGlobalinfoContext *ctx) = 0;
  virtual void exitShowGlobalinfo(MySQLParser::ShowGlobalinfoContext *ctx) = 0;

  virtual void enterShowErrWarn(MySQLParser::ShowErrWarnContext *ctx) = 0;
  virtual void exitShowErrWarn(MySQLParser::ShowErrWarnContext *ctx) = 0;

  virtual void enterShowCountErrWarn(MySQLParser::ShowCountErrWarnContext *ctx) = 0;
  virtual void exitShowCountErrWarn(MySQLParser::ShowCountErrWarnContext *ctx) = 0;

  virtual void enterShowFromschemaFilter(MySQLParser::ShowFromschemaFilterContext *ctx) = 0;
  virtual void exitShowFromschemaFilter(MySQLParser::ShowFromschemaFilterContext *ctx) = 0;

  virtual void enterShowRoutinecode(MySQLParser::ShowRoutinecodeContext *ctx) = 0;
  virtual void exitShowRoutinecode(MySQLParser::ShowRoutinecodeContext *ctx) = 0;

  virtual void enterShowGrants(MySQLParser::ShowGrantsContext *ctx) = 0;
  virtual void exitShowGrants(MySQLParser::ShowGrantsContext *ctx) = 0;

  virtual void enterShowIndexes(MySQLParser::ShowIndexesContext *ctx) = 0;
  virtual void exitShowIndexes(MySQLParser::ShowIndexesContext *ctx) = 0;

  virtual void enterShowOpentables(MySQLParser::ShowOpentablesContext *ctx) = 0;
  virtual void exitShowOpentables(MySQLParser::ShowOpentablesContext *ctx) = 0;

  virtual void enterShowProfile(MySQLParser::ShowProfileContext *ctx) = 0;
  virtual void exitShowProfile(MySQLParser::ShowProfileContext *ctx) = 0;

  virtual void enterShowSlavestatus(MySQLParser::ShowSlavestatusContext *ctx) = 0;
  virtual void exitShowSlavestatus(MySQLParser::ShowSlavestatusContext *ctx) = 0;

  virtual void enterVariable_clause(MySQLParser::Variable_clauseContext *ctx) = 0;
  virtual void exitVariable_clause(MySQLParser::Variable_clauseContext *ctx) = 0;

  virtual void enterShow_filter(MySQLParser::Show_filterContext *ctx) = 0;
  virtual void exitShow_filter(MySQLParser::Show_filterContext *ctx) = 0;

  virtual void enterShow_profile_type(MySQLParser::Show_profile_typeContext *ctx) = 0;
  virtual void exitShow_profile_type(MySQLParser::Show_profile_typeContext *ctx) = 0;

  virtual void enterBinlog_statement(MySQLParser::Binlog_statementContext *ctx) = 0;
  virtual void exitBinlog_statement(MySQLParser::Binlog_statementContext *ctx) = 0;

  virtual void enterCache_index_statement(MySQLParser::Cache_index_statementContext *ctx) = 0;
  virtual void exitCache_index_statement(MySQLParser::Cache_index_statementContext *ctx) = 0;

  virtual void enterFlush_statement(MySQLParser::Flush_statementContext *ctx) = 0;
  virtual void exitFlush_statement(MySQLParser::Flush_statementContext *ctx) = 0;

  virtual void enterKill_statement(MySQLParser::Kill_statementContext *ctx) = 0;
  virtual void exitKill_statement(MySQLParser::Kill_statementContext *ctx) = 0;

  virtual void enterLoad_index_into_cache(MySQLParser::Load_index_into_cacheContext *ctx) = 0;
  virtual void exitLoad_index_into_cache(MySQLParser::Load_index_into_cacheContext *ctx) = 0;

  virtual void enterReset_statement(MySQLParser::Reset_statementContext *ctx) = 0;
  virtual void exitReset_statement(MySQLParser::Reset_statementContext *ctx) = 0;

  virtual void enterShutdown_statement(MySQLParser::Shutdown_statementContext *ctx) = 0;
  virtual void exitShutdown_statement(MySQLParser::Shutdown_statementContext *ctx) = 0;

  virtual void enterTbl_index_list(MySQLParser::Tbl_index_listContext *ctx) = 0;
  virtual void exitTbl_index_list(MySQLParser::Tbl_index_listContext *ctx) = 0;

  virtual void enterFlush_option(MySQLParser::Flush_optionContext *ctx) = 0;
  virtual void exitFlush_option(MySQLParser::Flush_optionContext *ctx) = 0;

  virtual void enterLoad_tbl_index_list(MySQLParser::Load_tbl_index_listContext *ctx) = 0;
  virtual void exitLoad_tbl_index_list(MySQLParser::Load_tbl_index_listContext *ctx) = 0;

  virtual void enterSimple_describe_statement(MySQLParser::Simple_describe_statementContext *ctx) = 0;
  virtual void exitSimple_describe_statement(MySQLParser::Simple_describe_statementContext *ctx) = 0;

  virtual void enterFull_describe_statement(MySQLParser::Full_describe_statementContext *ctx) = 0;
  virtual void exitFull_describe_statement(MySQLParser::Full_describe_statementContext *ctx) = 0;

  virtual void enterHelp_statement(MySQLParser::Help_statementContext *ctx) = 0;
  virtual void exitHelp_statement(MySQLParser::Help_statementContext *ctx) = 0;

  virtual void enterUse_statement(MySQLParser::Use_statementContext *ctx) = 0;
  virtual void exitUse_statement(MySQLParser::Use_statementContext *ctx) = 0;

  virtual void enterDescstmtDescObj(MySQLParser::DescstmtDescObjContext *ctx) = 0;
  virtual void exitDescstmtDescObj(MySQLParser::DescstmtDescObjContext *ctx) = 0;

  virtual void enterConnectionDescObj(MySQLParser::ConnectionDescObjContext *ctx) = 0;
  virtual void exitConnectionDescObj(MySQLParser::ConnectionDescObjContext *ctx) = 0;

  virtual void enterTable_name(MySQLParser::Table_nameContext *ctx) = 0;
  virtual void exitTable_name(MySQLParser::Table_nameContext *ctx) = 0;

  virtual void enterFull_id(MySQLParser::Full_idContext *ctx) = 0;
  virtual void exitFull_id(MySQLParser::Full_idContext *ctx) = 0;

  virtual void enterFull_column_name(MySQLParser::Full_column_nameContext *ctx) = 0;
  virtual void exitFull_column_name(MySQLParser::Full_column_nameContext *ctx) = 0;

  virtual void enterIndex_col_name(MySQLParser::Index_col_nameContext *ctx) = 0;
  virtual void exitIndex_col_name(MySQLParser::Index_col_nameContext *ctx) = 0;

  virtual void enterUser_name(MySQLParser::User_nameContext *ctx) = 0;
  virtual void exitUser_name(MySQLParser::User_nameContext *ctx) = 0;

  virtual void enterMysql_variable(MySQLParser::Mysql_variableContext *ctx) = 0;
  virtual void exitMysql_variable(MySQLParser::Mysql_variableContext *ctx) = 0;

  virtual void enterCharset_name(MySQLParser::Charset_nameContext *ctx) = 0;
  virtual void exitCharset_name(MySQLParser::Charset_nameContext *ctx) = 0;

  virtual void enterCollation_name(MySQLParser::Collation_nameContext *ctx) = 0;
  virtual void exitCollation_name(MySQLParser::Collation_nameContext *ctx) = 0;

  virtual void enterEngine_name(MySQLParser::Engine_nameContext *ctx) = 0;
  virtual void exitEngine_name(MySQLParser::Engine_nameContext *ctx) = 0;

  virtual void enterUuid_set(MySQLParser::Uuid_setContext *ctx) = 0;
  virtual void exitUuid_set(MySQLParser::Uuid_setContext *ctx) = 0;

  virtual void enterXid(MySQLParser::XidContext *ctx) = 0;
  virtual void exitXid(MySQLParser::XidContext *ctx) = 0;

  virtual void enterXid_string_id(MySQLParser::Xid_string_idContext *ctx) = 0;
  virtual void exitXid_string_id(MySQLParser::Xid_string_idContext *ctx) = 0;

  virtual void enterAuth_plugin(MySQLParser::Auth_pluginContext *ctx) = 0;
  virtual void exitAuth_plugin(MySQLParser::Auth_pluginContext *ctx) = 0;

  virtual void enterId_(MySQLParser::Id_Context *ctx) = 0;
  virtual void exitId_(MySQLParser::Id_Context *ctx) = 0;

  virtual void enterSimple_id(MySQLParser::Simple_idContext *ctx) = 0;
  virtual void exitSimple_id(MySQLParser::Simple_idContext *ctx) = 0;

  virtual void enterDot_ext_id(MySQLParser::Dot_ext_idContext *ctx) = 0;
  virtual void exitDot_ext_id(MySQLParser::Dot_ext_idContext *ctx) = 0;

  virtual void enterDecimal_literal(MySQLParser::Decimal_literalContext *ctx) = 0;
  virtual void exitDecimal_literal(MySQLParser::Decimal_literalContext *ctx) = 0;

  virtual void enterFilesize_literal(MySQLParser::Filesize_literalContext *ctx) = 0;
  virtual void exitFilesize_literal(MySQLParser::Filesize_literalContext *ctx) = 0;

  virtual void enterString_literal(MySQLParser::String_literalContext *ctx) = 0;
  virtual void exitString_literal(MySQLParser::String_literalContext *ctx) = 0;

  virtual void enterBoolean_literal(MySQLParser::Boolean_literalContext *ctx) = 0;
  virtual void exitBoolean_literal(MySQLParser::Boolean_literalContext *ctx) = 0;

  virtual void enterHexadecimal_literal(MySQLParser::Hexadecimal_literalContext *ctx) = 0;
  virtual void exitHexadecimal_literal(MySQLParser::Hexadecimal_literalContext *ctx) = 0;

  virtual void enterNull_notnull(MySQLParser::Null_notnullContext *ctx) = 0;
  virtual void exitNull_notnull(MySQLParser::Null_notnullContext *ctx) = 0;

  virtual void enterConstant(MySQLParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(MySQLParser::ConstantContext *ctx) = 0;

  virtual void enterCharDatatype(MySQLParser::CharDatatypeContext *ctx) = 0;
  virtual void exitCharDatatype(MySQLParser::CharDatatypeContext *ctx) = 0;

  virtual void enterDimensionDatatype(MySQLParser::DimensionDatatypeContext *ctx) = 0;
  virtual void exitDimensionDatatype(MySQLParser::DimensionDatatypeContext *ctx) = 0;

  virtual void enterSimpleDatatype(MySQLParser::SimpleDatatypeContext *ctx) = 0;
  virtual void exitSimpleDatatype(MySQLParser::SimpleDatatypeContext *ctx) = 0;

  virtual void enterCollectCharDatatype(MySQLParser::CollectCharDatatypeContext *ctx) = 0;
  virtual void exitCollectCharDatatype(MySQLParser::CollectCharDatatypeContext *ctx) = 0;

  virtual void enterSpatialDatatype(MySQLParser::SpatialDatatypeContext *ctx) = 0;
  virtual void exitSpatialDatatype(MySQLParser::SpatialDatatypeContext *ctx) = 0;

  virtual void enterData_type_to_convert(MySQLParser::Data_type_to_convertContext *ctx) = 0;
  virtual void exitData_type_to_convert(MySQLParser::Data_type_to_convertContext *ctx) = 0;

  virtual void enterSpatial_data_type(MySQLParser::Spatial_data_typeContext *ctx) = 0;
  virtual void exitSpatial_data_type(MySQLParser::Spatial_data_typeContext *ctx) = 0;

  virtual void enterLength_one_dimension(MySQLParser::Length_one_dimensionContext *ctx) = 0;
  virtual void exitLength_one_dimension(MySQLParser::Length_one_dimensionContext *ctx) = 0;

  virtual void enterLength_two_dimension(MySQLParser::Length_two_dimensionContext *ctx) = 0;
  virtual void exitLength_two_dimension(MySQLParser::Length_two_dimensionContext *ctx) = 0;

  virtual void enterLength_two_optional_dimension(MySQLParser::Length_two_optional_dimensionContext *ctx) = 0;
  virtual void exitLength_two_optional_dimension(MySQLParser::Length_two_optional_dimensionContext *ctx) = 0;

  virtual void enterId_list(MySQLParser::Id_listContext *ctx) = 0;
  virtual void exitId_list(MySQLParser::Id_listContext *ctx) = 0;

  virtual void enterTable_list(MySQLParser::Table_listContext *ctx) = 0;
  virtual void exitTable_list(MySQLParser::Table_listContext *ctx) = 0;

  virtual void enterTable_pair_list(MySQLParser::Table_pair_listContext *ctx) = 0;
  virtual void exitTable_pair_list(MySQLParser::Table_pair_listContext *ctx) = 0;

  virtual void enterIndex_colname_list(MySQLParser::Index_colname_listContext *ctx) = 0;
  virtual void exitIndex_colname_list(MySQLParser::Index_colname_listContext *ctx) = 0;

  virtual void enterExpression_list(MySQLParser::Expression_listContext *ctx) = 0;
  virtual void exitExpression_list(MySQLParser::Expression_listContext *ctx) = 0;

  virtual void enterConstant_list(MySQLParser::Constant_listContext *ctx) = 0;
  virtual void exitConstant_list(MySQLParser::Constant_listContext *ctx) = 0;

  virtual void enterSimple_string_list(MySQLParser::Simple_string_listContext *ctx) = 0;
  virtual void exitSimple_string_list(MySQLParser::Simple_string_listContext *ctx) = 0;

  virtual void enterUser_var_list(MySQLParser::User_var_listContext *ctx) = 0;
  virtual void exitUser_var_list(MySQLParser::User_var_listContext *ctx) = 0;

  virtual void enterDefault_value(MySQLParser::Default_valueContext *ctx) = 0;
  virtual void exitDefault_value(MySQLParser::Default_valueContext *ctx) = 0;

  virtual void enterIf_exists(MySQLParser::If_existsContext *ctx) = 0;
  virtual void exitIf_exists(MySQLParser::If_existsContext *ctx) = 0;

  virtual void enterIf_not_exists(MySQLParser::If_not_existsContext *ctx) = 0;
  virtual void exitIf_not_exists(MySQLParser::If_not_existsContext *ctx) = 0;

  virtual void enterSpecificFunctionCall(MySQLParser::SpecificFunctionCallContext *ctx) = 0;
  virtual void exitSpecificFunctionCall(MySQLParser::SpecificFunctionCallContext *ctx) = 0;

  virtual void enterAggregateFunctionCall(MySQLParser::AggregateFunctionCallContext *ctx) = 0;
  virtual void exitAggregateFunctionCall(MySQLParser::AggregateFunctionCallContext *ctx) = 0;

  virtual void enterScalarFunctionCall(MySQLParser::ScalarFunctionCallContext *ctx) = 0;
  virtual void exitScalarFunctionCall(MySQLParser::ScalarFunctionCallContext *ctx) = 0;

  virtual void enterUdfFunctionCall(MySQLParser::UdfFunctionCallContext *ctx) = 0;
  virtual void exitUdfFunctionCall(MySQLParser::UdfFunctionCallContext *ctx) = 0;

  virtual void enterSimpleSpecificFCall(MySQLParser::SimpleSpecificFCallContext *ctx) = 0;
  virtual void exitSimpleSpecificFCall(MySQLParser::SimpleSpecificFCallContext *ctx) = 0;

  virtual void enterConvertDataTypeFCall(MySQLParser::ConvertDataTypeFCallContext *ctx) = 0;
  virtual void exitConvertDataTypeFCall(MySQLParser::ConvertDataTypeFCallContext *ctx) = 0;

  virtual void enterValuesFCall(MySQLParser::ValuesFCallContext *ctx) = 0;
  virtual void exitValuesFCall(MySQLParser::ValuesFCallContext *ctx) = 0;

  virtual void enterCaseFCall(MySQLParser::CaseFCallContext *ctx) = 0;
  virtual void exitCaseFCall(MySQLParser::CaseFCallContext *ctx) = 0;

  virtual void enterCharFCall(MySQLParser::CharFCallContext *ctx) = 0;
  virtual void exitCharFCall(MySQLParser::CharFCallContext *ctx) = 0;

  virtual void enterPositionFCall(MySQLParser::PositionFCallContext *ctx) = 0;
  virtual void exitPositionFCall(MySQLParser::PositionFCallContext *ctx) = 0;

  virtual void enterSubstrFCall(MySQLParser::SubstrFCallContext *ctx) = 0;
  virtual void exitSubstrFCall(MySQLParser::SubstrFCallContext *ctx) = 0;

  virtual void enterTrimFCall(MySQLParser::TrimFCallContext *ctx) = 0;
  virtual void exitTrimFCall(MySQLParser::TrimFCallContext *ctx) = 0;

  virtual void enterWeightFCall(MySQLParser::WeightFCallContext *ctx) = 0;
  virtual void exitWeightFCall(MySQLParser::WeightFCallContext *ctx) = 0;

  virtual void enterExtractFCall(MySQLParser::ExtractFCallContext *ctx) = 0;
  virtual void exitExtractFCall(MySQLParser::ExtractFCallContext *ctx) = 0;

  virtual void enterGetFormatFCall(MySQLParser::GetFormatFCallContext *ctx) = 0;
  virtual void exitGetFormatFCall(MySQLParser::GetFormatFCallContext *ctx) = 0;

  virtual void enterLevelWeightFList(MySQLParser::LevelWeightFListContext *ctx) = 0;
  virtual void exitLevelWeightFList(MySQLParser::LevelWeightFListContext *ctx) = 0;

  virtual void enterLevelWeightFRange(MySQLParser::LevelWeightFRangeContext *ctx) = 0;
  virtual void exitLevelWeightFRange(MySQLParser::LevelWeightFRangeContext *ctx) = 0;

  virtual void enterAggregate_windowed_function(MySQLParser::Aggregate_windowed_functionContext *ctx) = 0;
  virtual void exitAggregate_windowed_function(MySQLParser::Aggregate_windowed_functionContext *ctx) = 0;

  virtual void enterScalar_function_name(MySQLParser::Scalar_function_nameContext *ctx) = 0;
  virtual void exitScalar_function_name(MySQLParser::Scalar_function_nameContext *ctx) = 0;

  virtual void enterFunction_args(MySQLParser::Function_argsContext *ctx) = 0;
  virtual void exitFunction_args(MySQLParser::Function_argsContext *ctx) = 0;

  virtual void enterFunction_arg(MySQLParser::Function_argContext *ctx) = 0;
  virtual void exitFunction_arg(MySQLParser::Function_argContext *ctx) = 0;

  virtual void enterIsExpression(MySQLParser::IsExpressionContext *ctx) = 0;
  virtual void exitIsExpression(MySQLParser::IsExpressionContext *ctx) = 0;

  virtual void enterNotExpression(MySQLParser::NotExpressionContext *ctx) = 0;
  virtual void exitNotExpression(MySQLParser::NotExpressionContext *ctx) = 0;

  virtual void enterLogicalExpression(MySQLParser::LogicalExpressionContext *ctx) = 0;
  virtual void exitLogicalExpression(MySQLParser::LogicalExpressionContext *ctx) = 0;

  virtual void enterPredicateExpression(MySQLParser::PredicateExpressionContext *ctx) = 0;
  virtual void exitPredicateExpression(MySQLParser::PredicateExpressionContext *ctx) = 0;

  virtual void enterSoundsLikePredicate(MySQLParser::SoundsLikePredicateContext *ctx) = 0;
  virtual void exitSoundsLikePredicate(MySQLParser::SoundsLikePredicateContext *ctx) = 0;

  virtual void enterExpressionAtomPredicate(MySQLParser::ExpressionAtomPredicateContext *ctx) = 0;
  virtual void exitExpressionAtomPredicate(MySQLParser::ExpressionAtomPredicateContext *ctx) = 0;

  virtual void enterInPredicate(MySQLParser::InPredicateContext *ctx) = 0;
  virtual void exitInPredicate(MySQLParser::InPredicateContext *ctx) = 0;

  virtual void enterSubqueryComparasionPredicate(MySQLParser::SubqueryComparasionPredicateContext *ctx) = 0;
  virtual void exitSubqueryComparasionPredicate(MySQLParser::SubqueryComparasionPredicateContext *ctx) = 0;

  virtual void enterBetweenPredicate(MySQLParser::BetweenPredicateContext *ctx) = 0;
  virtual void exitBetweenPredicate(MySQLParser::BetweenPredicateContext *ctx) = 0;

  virtual void enterBinaryComparasionPredicate(MySQLParser::BinaryComparasionPredicateContext *ctx) = 0;
  virtual void exitBinaryComparasionPredicate(MySQLParser::BinaryComparasionPredicateContext *ctx) = 0;

  virtual void enterIsNullPredicate(MySQLParser::IsNullPredicateContext *ctx) = 0;
  virtual void exitIsNullPredicate(MySQLParser::IsNullPredicateContext *ctx) = 0;

  virtual void enterLikePredicate(MySQLParser::LikePredicateContext *ctx) = 0;
  virtual void exitLikePredicate(MySQLParser::LikePredicateContext *ctx) = 0;

  virtual void enterRegexpPredicate(MySQLParser::RegexpPredicateContext *ctx) = 0;
  virtual void exitRegexpPredicate(MySQLParser::RegexpPredicateContext *ctx) = 0;

  virtual void enterUnaryExpressionAtom(MySQLParser::UnaryExpressionAtomContext *ctx) = 0;
  virtual void exitUnaryExpressionAtom(MySQLParser::UnaryExpressionAtomContext *ctx) = 0;

  virtual void enterExistsExpessionAtom(MySQLParser::ExistsExpessionAtomContext *ctx) = 0;
  virtual void exitExistsExpessionAtom(MySQLParser::ExistsExpessionAtomContext *ctx) = 0;

  virtual void enterConstantExpressionAtom(MySQLParser::ConstantExpressionAtomContext *ctx) = 0;
  virtual void exitConstantExpressionAtom(MySQLParser::ConstantExpressionAtomContext *ctx) = 0;

  virtual void enterFunctionCallExpressionAtom(MySQLParser::FunctionCallExpressionAtomContext *ctx) = 0;
  virtual void exitFunctionCallExpressionAtom(MySQLParser::FunctionCallExpressionAtomContext *ctx) = 0;

  virtual void enterMysqlVariableExpressionAtom(MySQLParser::MysqlVariableExpressionAtomContext *ctx) = 0;
  virtual void exitMysqlVariableExpressionAtom(MySQLParser::MysqlVariableExpressionAtomContext *ctx) = 0;

  virtual void enterBinaryExpressionAtom(MySQLParser::BinaryExpressionAtomContext *ctx) = 0;
  virtual void exitBinaryExpressionAtom(MySQLParser::BinaryExpressionAtomContext *ctx) = 0;

  virtual void enterFullColumnNameExpressionAtom(MySQLParser::FullColumnNameExpressionAtomContext *ctx) = 0;
  virtual void exitFullColumnNameExpressionAtom(MySQLParser::FullColumnNameExpressionAtomContext *ctx) = 0;

  virtual void enterDefaultExpressionAtom(MySQLParser::DefaultExpressionAtomContext *ctx) = 0;
  virtual void exitDefaultExpressionAtom(MySQLParser::DefaultExpressionAtomContext *ctx) = 0;

  virtual void enterBitExpressionAtom(MySQLParser::BitExpressionAtomContext *ctx) = 0;
  virtual void exitBitExpressionAtom(MySQLParser::BitExpressionAtomContext *ctx) = 0;

  virtual void enterNestedExpressionAtom(MySQLParser::NestedExpressionAtomContext *ctx) = 0;
  virtual void exitNestedExpressionAtom(MySQLParser::NestedExpressionAtomContext *ctx) = 0;

  virtual void enterMathExpressionAtom(MySQLParser::MathExpressionAtomContext *ctx) = 0;
  virtual void exitMathExpressionAtom(MySQLParser::MathExpressionAtomContext *ctx) = 0;

  virtual void enterIntervalExpressionAtom(MySQLParser::IntervalExpressionAtomContext *ctx) = 0;
  virtual void exitIntervalExpressionAtom(MySQLParser::IntervalExpressionAtomContext *ctx) = 0;

  virtual void enterUnary_operator(MySQLParser::Unary_operatorContext *ctx) = 0;
  virtual void exitUnary_operator(MySQLParser::Unary_operatorContext *ctx) = 0;

  virtual void enterComparison_operator(MySQLParser::Comparison_operatorContext *ctx) = 0;
  virtual void exitComparison_operator(MySQLParser::Comparison_operatorContext *ctx) = 0;

  virtual void enterLogical_operator(MySQLParser::Logical_operatorContext *ctx) = 0;
  virtual void exitLogical_operator(MySQLParser::Logical_operatorContext *ctx) = 0;

  virtual void enterBit_operator(MySQLParser::Bit_operatorContext *ctx) = 0;
  virtual void exitBit_operator(MySQLParser::Bit_operatorContext *ctx) = 0;

  virtual void enterMath_operator(MySQLParser::Math_operatorContext *ctx) = 0;
  virtual void exitMath_operator(MySQLParser::Math_operatorContext *ctx) = 0;

  virtual void enterCharset_name_base(MySQLParser::Charset_name_baseContext *ctx) = 0;
  virtual void exitCharset_name_base(MySQLParser::Charset_name_baseContext *ctx) = 0;

  virtual void enterTransaction_level_base(MySQLParser::Transaction_level_baseContext *ctx) = 0;
  virtual void exitTransaction_level_base(MySQLParser::Transaction_level_baseContext *ctx) = 0;

  virtual void enterPrivileges_base(MySQLParser::Privileges_baseContext *ctx) = 0;
  virtual void exitPrivileges_base(MySQLParser::Privileges_baseContext *ctx) = 0;

  virtual void enterInterval_type_base(MySQLParser::Interval_type_baseContext *ctx) = 0;
  virtual void exitInterval_type_base(MySQLParser::Interval_type_baseContext *ctx) = 0;

  virtual void enterData_type_base(MySQLParser::Data_type_baseContext *ctx) = 0;
  virtual void exitData_type_base(MySQLParser::Data_type_baseContext *ctx) = 0;

  virtual void enterKeywords_can_be_id(MySQLParser::Keywords_can_be_idContext *ctx) = 0;
  virtual void exitKeywords_can_be_id(MySQLParser::Keywords_can_be_idContext *ctx) = 0;

  virtual void enterFunction_name_base(MySQLParser::Function_name_baseContext *ctx) = 0;
  virtual void exitFunction_name_base(MySQLParser::Function_name_baseContext *ctx) = 0;


};

}  // namespace parser

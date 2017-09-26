
// Generated from MySqlParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MySqlParserListener.h"


namespace parser {

/**
 * This class provides an empty implementation of MySqlParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MySqlParserBaseListener : public MySqlParserListener {
public:

  virtual void enterRoot(MySqlParser::RootContext * /*ctx*/) override { }
  virtual void exitRoot(MySqlParser::RootContext * /*ctx*/) override { }

  virtual void enterSql_statements(MySqlParser::Sql_statementsContext * /*ctx*/) override { }
  virtual void exitSql_statements(MySqlParser::Sql_statementsContext * /*ctx*/) override { }

  virtual void enterSql_statement(MySqlParser::Sql_statementContext * /*ctx*/) override { }
  virtual void exitSql_statement(MySqlParser::Sql_statementContext * /*ctx*/) override { }

  virtual void enterEmpty_statement(MySqlParser::Empty_statementContext * /*ctx*/) override { }
  virtual void exitEmpty_statement(MySqlParser::Empty_statementContext * /*ctx*/) override { }

  virtual void enterDdl_statement(MySqlParser::Ddl_statementContext * /*ctx*/) override { }
  virtual void exitDdl_statement(MySqlParser::Ddl_statementContext * /*ctx*/) override { }

  virtual void enterDml_statement(MySqlParser::Dml_statementContext * /*ctx*/) override { }
  virtual void exitDml_statement(MySqlParser::Dml_statementContext * /*ctx*/) override { }

  virtual void enterTransaction_statement(MySqlParser::Transaction_statementContext * /*ctx*/) override { }
  virtual void exitTransaction_statement(MySqlParser::Transaction_statementContext * /*ctx*/) override { }

  virtual void enterReplication_statement(MySqlParser::Replication_statementContext * /*ctx*/) override { }
  virtual void exitReplication_statement(MySqlParser::Replication_statementContext * /*ctx*/) override { }

  virtual void enterPrepared_statement(MySqlParser::Prepared_statementContext * /*ctx*/) override { }
  virtual void exitPrepared_statement(MySqlParser::Prepared_statementContext * /*ctx*/) override { }

  virtual void enterCompound_statement(MySqlParser::Compound_statementContext * /*ctx*/) override { }
  virtual void exitCompound_statement(MySqlParser::Compound_statementContext * /*ctx*/) override { }

  virtual void enterAdministration_statement(MySqlParser::Administration_statementContext * /*ctx*/) override { }
  virtual void exitAdministration_statement(MySqlParser::Administration_statementContext * /*ctx*/) override { }

  virtual void enterUtility_statement(MySqlParser::Utility_statementContext * /*ctx*/) override { }
  virtual void exitUtility_statement(MySqlParser::Utility_statementContext * /*ctx*/) override { }

  virtual void enterCreate_database(MySqlParser::Create_databaseContext * /*ctx*/) override { }
  virtual void exitCreate_database(MySqlParser::Create_databaseContext * /*ctx*/) override { }

  virtual void enterCreate_event(MySqlParser::Create_eventContext * /*ctx*/) override { }
  virtual void exitCreate_event(MySqlParser::Create_eventContext * /*ctx*/) override { }

  virtual void enterCreate_index(MySqlParser::Create_indexContext * /*ctx*/) override { }
  virtual void exitCreate_index(MySqlParser::Create_indexContext * /*ctx*/) override { }

  virtual void enterCreate_logfile_group(MySqlParser::Create_logfile_groupContext * /*ctx*/) override { }
  virtual void exitCreate_logfile_group(MySqlParser::Create_logfile_groupContext * /*ctx*/) override { }

  virtual void enterCreate_procedure(MySqlParser::Create_procedureContext * /*ctx*/) override { }
  virtual void exitCreate_procedure(MySqlParser::Create_procedureContext * /*ctx*/) override { }

  virtual void enterCreate_function(MySqlParser::Create_functionContext * /*ctx*/) override { }
  virtual void exitCreate_function(MySqlParser::Create_functionContext * /*ctx*/) override { }

  virtual void enterCreate_server(MySqlParser::Create_serverContext * /*ctx*/) override { }
  virtual void exitCreate_server(MySqlParser::Create_serverContext * /*ctx*/) override { }

  virtual void enterCopyCreateTable(MySqlParser::CopyCreateTableContext * /*ctx*/) override { }
  virtual void exitCopyCreateTable(MySqlParser::CopyCreateTableContext * /*ctx*/) override { }

  virtual void enterQueryCreateTable(MySqlParser::QueryCreateTableContext * /*ctx*/) override { }
  virtual void exitQueryCreateTable(MySqlParser::QueryCreateTableContext * /*ctx*/) override { }

  virtual void enterColCreateTable(MySqlParser::ColCreateTableContext * /*ctx*/) override { }
  virtual void exitColCreateTable(MySqlParser::ColCreateTableContext * /*ctx*/) override { }

  virtual void enterCreate_tablespace_innodb(MySqlParser::Create_tablespace_innodbContext * /*ctx*/) override { }
  virtual void exitCreate_tablespace_innodb(MySqlParser::Create_tablespace_innodbContext * /*ctx*/) override { }

  virtual void enterCreate_tablespace_ndb(MySqlParser::Create_tablespace_ndbContext * /*ctx*/) override { }
  virtual void exitCreate_tablespace_ndb(MySqlParser::Create_tablespace_ndbContext * /*ctx*/) override { }

  virtual void enterCreate_trigger(MySqlParser::Create_triggerContext * /*ctx*/) override { }
  virtual void exitCreate_trigger(MySqlParser::Create_triggerContext * /*ctx*/) override { }

  virtual void enterCreate_view(MySqlParser::Create_viewContext * /*ctx*/) override { }
  virtual void exitCreate_view(MySqlParser::Create_viewContext * /*ctx*/) override { }

  virtual void enterCreate_database_option(MySqlParser::Create_database_optionContext * /*ctx*/) override { }
  virtual void exitCreate_database_option(MySqlParser::Create_database_optionContext * /*ctx*/) override { }

  virtual void enterOwner_statement(MySqlParser::Owner_statementContext * /*ctx*/) override { }
  virtual void exitOwner_statement(MySqlParser::Owner_statementContext * /*ctx*/) override { }

  virtual void enterPreciseSchedule(MySqlParser::PreciseScheduleContext * /*ctx*/) override { }
  virtual void exitPreciseSchedule(MySqlParser::PreciseScheduleContext * /*ctx*/) override { }

  virtual void enterIntervalSchedule(MySqlParser::IntervalScheduleContext * /*ctx*/) override { }
  virtual void exitIntervalSchedule(MySqlParser::IntervalScheduleContext * /*ctx*/) override { }

  virtual void enterTimestamp_value(MySqlParser::Timestamp_valueContext * /*ctx*/) override { }
  virtual void exitTimestamp_value(MySqlParser::Timestamp_valueContext * /*ctx*/) override { }

  virtual void enterInterval_expr(MySqlParser::Interval_exprContext * /*ctx*/) override { }
  virtual void exitInterval_expr(MySqlParser::Interval_exprContext * /*ctx*/) override { }

  virtual void enterInterval_type(MySqlParser::Interval_typeContext * /*ctx*/) override { }
  virtual void exitInterval_type(MySqlParser::Interval_typeContext * /*ctx*/) override { }

  virtual void enterIndex_type(MySqlParser::Index_typeContext * /*ctx*/) override { }
  virtual void exitIndex_type(MySqlParser::Index_typeContext * /*ctx*/) override { }

  virtual void enterIndex_option(MySqlParser::Index_optionContext * /*ctx*/) override { }
  virtual void exitIndex_option(MySqlParser::Index_optionContext * /*ctx*/) override { }

  virtual void enterProc_param(MySqlParser::Proc_paramContext * /*ctx*/) override { }
  virtual void exitProc_param(MySqlParser::Proc_paramContext * /*ctx*/) override { }

  virtual void enterFunc_param(MySqlParser::Func_paramContext * /*ctx*/) override { }
  virtual void exitFunc_param(MySqlParser::Func_paramContext * /*ctx*/) override { }

  virtual void enterRcComment(MySqlParser::RcCommentContext * /*ctx*/) override { }
  virtual void exitRcComment(MySqlParser::RcCommentContext * /*ctx*/) override { }

  virtual void enterRcSqllang(MySqlParser::RcSqllangContext * /*ctx*/) override { }
  virtual void exitRcSqllang(MySqlParser::RcSqllangContext * /*ctx*/) override { }

  virtual void enterRcDeterm(MySqlParser::RcDetermContext * /*ctx*/) override { }
  virtual void exitRcDeterm(MySqlParser::RcDetermContext * /*ctx*/) override { }

  virtual void enterRcSqldata(MySqlParser::RcSqldataContext * /*ctx*/) override { }
  virtual void exitRcSqldata(MySqlParser::RcSqldataContext * /*ctx*/) override { }

  virtual void enterRcSecurestmt(MySqlParser::RcSecurestmtContext * /*ctx*/) override { }
  virtual void exitRcSecurestmt(MySqlParser::RcSecurestmtContext * /*ctx*/) override { }

  virtual void enterServer_option(MySqlParser::Server_optionContext * /*ctx*/) override { }
  virtual void exitServer_option(MySqlParser::Server_optionContext * /*ctx*/) override { }

  virtual void enterColumn_def_table_constraints(MySqlParser::Column_def_table_constraintsContext * /*ctx*/) override { }
  virtual void exitColumn_def_table_constraints(MySqlParser::Column_def_table_constraintsContext * /*ctx*/) override { }

  virtual void enterColumnDefinition(MySqlParser::ColumnDefinitionContext * /*ctx*/) override { }
  virtual void exitColumnDefinition(MySqlParser::ColumnDefinitionContext * /*ctx*/) override { }

  virtual void enterConstraintDefinition(MySqlParser::ConstraintDefinitionContext * /*ctx*/) override { }
  virtual void exitConstraintDefinition(MySqlParser::ConstraintDefinitionContext * /*ctx*/) override { }

  virtual void enterIndexDefinition(MySqlParser::IndexDefinitionContext * /*ctx*/) override { }
  virtual void exitIndexDefinition(MySqlParser::IndexDefinitionContext * /*ctx*/) override { }

  virtual void enterColumn_definition(MySqlParser::Column_definitionContext * /*ctx*/) override { }
  virtual void exitColumn_definition(MySqlParser::Column_definitionContext * /*ctx*/) override { }

  virtual void enterColConstrNull(MySqlParser::ColConstrNullContext * /*ctx*/) override { }
  virtual void exitColConstrNull(MySqlParser::ColConstrNullContext * /*ctx*/) override { }

  virtual void enterColConstrDflt(MySqlParser::ColConstrDfltContext * /*ctx*/) override { }
  virtual void exitColConstrDflt(MySqlParser::ColConstrDfltContext * /*ctx*/) override { }

  virtual void enterColConstrAuInc(MySqlParser::ColConstrAuIncContext * /*ctx*/) override { }
  virtual void exitColConstrAuInc(MySqlParser::ColConstrAuIncContext * /*ctx*/) override { }

  virtual void enterColConstrPK(MySqlParser::ColConstrPKContext * /*ctx*/) override { }
  virtual void exitColConstrPK(MySqlParser::ColConstrPKContext * /*ctx*/) override { }

  virtual void enterColConstrUK(MySqlParser::ColConstrUKContext * /*ctx*/) override { }
  virtual void exitColConstrUK(MySqlParser::ColConstrUKContext * /*ctx*/) override { }

  virtual void enterColConstrComment(MySqlParser::ColConstrCommentContext * /*ctx*/) override { }
  virtual void exitColConstrComment(MySqlParser::ColConstrCommentContext * /*ctx*/) override { }

  virtual void enterColConstrForm(MySqlParser::ColConstrFormContext * /*ctx*/) override { }
  virtual void exitColConstrForm(MySqlParser::ColConstrFormContext * /*ctx*/) override { }

  virtual void enterColConstrStorage(MySqlParser::ColConstrStorageContext * /*ctx*/) override { }
  virtual void exitColConstrStorage(MySqlParser::ColConstrStorageContext * /*ctx*/) override { }

  virtual void enterColConstrRefdef(MySqlParser::ColConstrRefdefContext * /*ctx*/) override { }
  virtual void exitColConstrRefdef(MySqlParser::ColConstrRefdefContext * /*ctx*/) override { }

  virtual void enterTblConstrPK(MySqlParser::TblConstrPKContext * /*ctx*/) override { }
  virtual void exitTblConstrPK(MySqlParser::TblConstrPKContext * /*ctx*/) override { }

  virtual void enterTblConstrUK(MySqlParser::TblConstrUKContext * /*ctx*/) override { }
  virtual void exitTblConstrUK(MySqlParser::TblConstrUKContext * /*ctx*/) override { }

  virtual void enterTblConstrFK(MySqlParser::TblConstrFKContext * /*ctx*/) override { }
  virtual void exitTblConstrFK(MySqlParser::TblConstrFKContext * /*ctx*/) override { }

  virtual void enterTblConstCheck(MySqlParser::TblConstCheckContext * /*ctx*/) override { }
  virtual void exitTblConstCheck(MySqlParser::TblConstCheckContext * /*ctx*/) override { }

  virtual void enterReference_definition(MySqlParser::Reference_definitionContext * /*ctx*/) override { }
  virtual void exitReference_definition(MySqlParser::Reference_definitionContext * /*ctx*/) override { }

  virtual void enterOn_delete_action(MySqlParser::On_delete_actionContext * /*ctx*/) override { }
  virtual void exitOn_delete_action(MySqlParser::On_delete_actionContext * /*ctx*/) override { }

  virtual void enterOn_update_action(MySqlParser::On_update_actionContext * /*ctx*/) override { }
  virtual void exitOn_update_action(MySqlParser::On_update_actionContext * /*ctx*/) override { }

  virtual void enterReference_action_control_type(MySqlParser::Reference_action_control_typeContext * /*ctx*/) override { }
  virtual void exitReference_action_control_type(MySqlParser::Reference_action_control_typeContext * /*ctx*/) override { }

  virtual void enterSimpleIndex(MySqlParser::SimpleIndexContext * /*ctx*/) override { }
  virtual void exitSimpleIndex(MySqlParser::SimpleIndexContext * /*ctx*/) override { }

  virtual void enterSpecIndex(MySqlParser::SpecIndexContext * /*ctx*/) override { }
  virtual void exitSpecIndex(MySqlParser::SpecIndexContext * /*ctx*/) override { }

  virtual void enterTblOptEngine(MySqlParser::TblOptEngineContext * /*ctx*/) override { }
  virtual void exitTblOptEngine(MySqlParser::TblOptEngineContext * /*ctx*/) override { }

  virtual void enterTblOptAuInc(MySqlParser::TblOptAuIncContext * /*ctx*/) override { }
  virtual void exitTblOptAuInc(MySqlParser::TblOptAuIncContext * /*ctx*/) override { }

  virtual void enterTblOptAvgRLen(MySqlParser::TblOptAvgRLenContext * /*ctx*/) override { }
  virtual void exitTblOptAvgRLen(MySqlParser::TblOptAvgRLenContext * /*ctx*/) override { }

  virtual void enterTblOptDefCharSet(MySqlParser::TblOptDefCharSetContext * /*ctx*/) override { }
  virtual void exitTblOptDefCharSet(MySqlParser::TblOptDefCharSetContext * /*ctx*/) override { }

  virtual void enterTblOptChkSum(MySqlParser::TblOptChkSumContext * /*ctx*/) override { }
  virtual void exitTblOptChkSum(MySqlParser::TblOptChkSumContext * /*ctx*/) override { }

  virtual void enterTblOptDefCollate(MySqlParser::TblOptDefCollateContext * /*ctx*/) override { }
  virtual void exitTblOptDefCollate(MySqlParser::TblOptDefCollateContext * /*ctx*/) override { }

  virtual void enterTblOptComment(MySqlParser::TblOptCommentContext * /*ctx*/) override { }
  virtual void exitTblOptComment(MySqlParser::TblOptCommentContext * /*ctx*/) override { }

  virtual void enterTblOptCompr(MySqlParser::TblOptComprContext * /*ctx*/) override { }
  virtual void exitTblOptCompr(MySqlParser::TblOptComprContext * /*ctx*/) override { }

  virtual void enterTblOptConn(MySqlParser::TblOptConnContext * /*ctx*/) override { }
  virtual void exitTblOptConn(MySqlParser::TblOptConnContext * /*ctx*/) override { }

  virtual void enterTblOptDataDir(MySqlParser::TblOptDataDirContext * /*ctx*/) override { }
  virtual void exitTblOptDataDir(MySqlParser::TblOptDataDirContext * /*ctx*/) override { }

  virtual void enterTblOptDelKW(MySqlParser::TblOptDelKWContext * /*ctx*/) override { }
  virtual void exitTblOptDelKW(MySqlParser::TblOptDelKWContext * /*ctx*/) override { }

  virtual void enterTblOptEncr(MySqlParser::TblOptEncrContext * /*ctx*/) override { }
  virtual void exitTblOptEncr(MySqlParser::TblOptEncrContext * /*ctx*/) override { }

  virtual void enterTblOptIndexDir(MySqlParser::TblOptIndexDirContext * /*ctx*/) override { }
  virtual void exitTblOptIndexDir(MySqlParser::TblOptIndexDirContext * /*ctx*/) override { }

  virtual void enterTblOptInsMeth(MySqlParser::TblOptInsMethContext * /*ctx*/) override { }
  virtual void exitTblOptInsMeth(MySqlParser::TblOptInsMethContext * /*ctx*/) override { }

  virtual void enterTblOptKeyBlockSz(MySqlParser::TblOptKeyBlockSzContext * /*ctx*/) override { }
  virtual void exitTblOptKeyBlockSz(MySqlParser::TblOptKeyBlockSzContext * /*ctx*/) override { }

  virtual void enterTblOptMaxRows(MySqlParser::TblOptMaxRowsContext * /*ctx*/) override { }
  virtual void exitTblOptMaxRows(MySqlParser::TblOptMaxRowsContext * /*ctx*/) override { }

  virtual void enterTblOptMinRows(MySqlParser::TblOptMinRowsContext * /*ctx*/) override { }
  virtual void exitTblOptMinRows(MySqlParser::TblOptMinRowsContext * /*ctx*/) override { }

  virtual void enterTblOptPackK(MySqlParser::TblOptPackKContext * /*ctx*/) override { }
  virtual void exitTblOptPackK(MySqlParser::TblOptPackKContext * /*ctx*/) override { }

  virtual void enterTblOptPasswd(MySqlParser::TblOptPasswdContext * /*ctx*/) override { }
  virtual void exitTblOptPasswd(MySqlParser::TblOptPasswdContext * /*ctx*/) override { }

  virtual void enterTblOptRowFormat(MySqlParser::TblOptRowFormatContext * /*ctx*/) override { }
  virtual void exitTblOptRowFormat(MySqlParser::TblOptRowFormatContext * /*ctx*/) override { }

  virtual void enterTblOptStatAutoR(MySqlParser::TblOptStatAutoRContext * /*ctx*/) override { }
  virtual void exitTblOptStatAutoR(MySqlParser::TblOptStatAutoRContext * /*ctx*/) override { }

  virtual void enterTblOptStatPersist(MySqlParser::TblOptStatPersistContext * /*ctx*/) override { }
  virtual void exitTblOptStatPersist(MySqlParser::TblOptStatPersistContext * /*ctx*/) override { }

  virtual void enterTblOptStatSamplPg(MySqlParser::TblOptStatSamplPgContext * /*ctx*/) override { }
  virtual void exitTblOptStatSamplPg(MySqlParser::TblOptStatSamplPgContext * /*ctx*/) override { }

  virtual void enterTblOptTablespace(MySqlParser::TblOptTablespaceContext * /*ctx*/) override { }
  virtual void exitTblOptTablespace(MySqlParser::TblOptTablespaceContext * /*ctx*/) override { }

  virtual void enterTblOptUnion(MySqlParser::TblOptUnionContext * /*ctx*/) override { }
  virtual void exitTblOptUnion(MySqlParser::TblOptUnionContext * /*ctx*/) override { }

  virtual void enterPartition_options(MySqlParser::Partition_optionsContext * /*ctx*/) override { }
  virtual void exitPartition_options(MySqlParser::Partition_optionsContext * /*ctx*/) override { }

  virtual void enterPartition_function_definition(MySqlParser::Partition_function_definitionContext * /*ctx*/) override { }
  virtual void exitPartition_function_definition(MySqlParser::Partition_function_definitionContext * /*ctx*/) override { }

  virtual void enterLinear_partition_func_def(MySqlParser::Linear_partition_func_defContext * /*ctx*/) override { }
  virtual void exitLinear_partition_func_def(MySqlParser::Linear_partition_func_defContext * /*ctx*/) override { }

  virtual void enterPartition_def(MySqlParser::Partition_defContext * /*ctx*/) override { }
  virtual void exitPartition_def(MySqlParser::Partition_defContext * /*ctx*/) override { }

  virtual void enterSubpartition_def(MySqlParser::Subpartition_defContext * /*ctx*/) override { }
  virtual void exitSubpartition_def(MySqlParser::Subpartition_defContext * /*ctx*/) override { }

  virtual void enterAlterDb(MySqlParser::AlterDbContext * /*ctx*/) override { }
  virtual void exitAlterDb(MySqlParser::AlterDbContext * /*ctx*/) override { }

  virtual void enterAlterDbUpgradeName(MySqlParser::AlterDbUpgradeNameContext * /*ctx*/) override { }
  virtual void exitAlterDbUpgradeName(MySqlParser::AlterDbUpgradeNameContext * /*ctx*/) override { }

  virtual void enterAlter_event(MySqlParser::Alter_eventContext * /*ctx*/) override { }
  virtual void exitAlter_event(MySqlParser::Alter_eventContext * /*ctx*/) override { }

  virtual void enterAlter_function(MySqlParser::Alter_functionContext * /*ctx*/) override { }
  virtual void exitAlter_function(MySqlParser::Alter_functionContext * /*ctx*/) override { }

  virtual void enterAlter_instance(MySqlParser::Alter_instanceContext * /*ctx*/) override { }
  virtual void exitAlter_instance(MySqlParser::Alter_instanceContext * /*ctx*/) override { }

  virtual void enterAlter_logfile_group(MySqlParser::Alter_logfile_groupContext * /*ctx*/) override { }
  virtual void exitAlter_logfile_group(MySqlParser::Alter_logfile_groupContext * /*ctx*/) override { }

  virtual void enterAlter_procedure(MySqlParser::Alter_procedureContext * /*ctx*/) override { }
  virtual void exitAlter_procedure(MySqlParser::Alter_procedureContext * /*ctx*/) override { }

  virtual void enterAlter_server(MySqlParser::Alter_serverContext * /*ctx*/) override { }
  virtual void exitAlter_server(MySqlParser::Alter_serverContext * /*ctx*/) override { }

  virtual void enterAlter_table(MySqlParser::Alter_tableContext * /*ctx*/) override { }
  virtual void exitAlter_table(MySqlParser::Alter_tableContext * /*ctx*/) override { }

  virtual void enterAlter_tablespace(MySqlParser::Alter_tablespaceContext * /*ctx*/) override { }
  virtual void exitAlter_tablespace(MySqlParser::Alter_tablespaceContext * /*ctx*/) override { }

  virtual void enterAlter_view(MySqlParser::Alter_viewContext * /*ctx*/) override { }
  virtual void exitAlter_view(MySqlParser::Alter_viewContext * /*ctx*/) override { }

  virtual void enterAltblTableOpt(MySqlParser::AltblTableOptContext * /*ctx*/) override { }
  virtual void exitAltblTableOpt(MySqlParser::AltblTableOptContext * /*ctx*/) override { }

  virtual void enterAltblAddCol(MySqlParser::AltblAddColContext * /*ctx*/) override { }
  virtual void exitAltblAddCol(MySqlParser::AltblAddColContext * /*ctx*/) override { }

  virtual void enterAltblAddCols(MySqlParser::AltblAddColsContext * /*ctx*/) override { }
  virtual void exitAltblAddCols(MySqlParser::AltblAddColsContext * /*ctx*/) override { }

  virtual void enterAltblAddIndex(MySqlParser::AltblAddIndexContext * /*ctx*/) override { }
  virtual void exitAltblAddIndex(MySqlParser::AltblAddIndexContext * /*ctx*/) override { }

  virtual void enterAltblAddPK(MySqlParser::AltblAddPKContext * /*ctx*/) override { }
  virtual void exitAltblAddPK(MySqlParser::AltblAddPKContext * /*ctx*/) override { }

  virtual void enterAltblAddUK(MySqlParser::AltblAddUKContext * /*ctx*/) override { }
  virtual void exitAltblAddUK(MySqlParser::AltblAddUKContext * /*ctx*/) override { }

  virtual void enterAltblAddSpecIndex(MySqlParser::AltblAddSpecIndexContext * /*ctx*/) override { }
  virtual void exitAltblAddSpecIndex(MySqlParser::AltblAddSpecIndexContext * /*ctx*/) override { }

  virtual void enterAltblAddFK(MySqlParser::AltblAddFKContext * /*ctx*/) override { }
  virtual void exitAltblAddFK(MySqlParser::AltblAddFKContext * /*ctx*/) override { }

  virtual void enterAltblAlg(MySqlParser::AltblAlgContext * /*ctx*/) override { }
  virtual void exitAltblAlg(MySqlParser::AltblAlgContext * /*ctx*/) override { }

  virtual void enterAltblColDef(MySqlParser::AltblColDefContext * /*ctx*/) override { }
  virtual void exitAltblColDef(MySqlParser::AltblColDefContext * /*ctx*/) override { }

  virtual void enterAltblColChange(MySqlParser::AltblColChangeContext * /*ctx*/) override { }
  virtual void exitAltblColChange(MySqlParser::AltblColChangeContext * /*ctx*/) override { }

  virtual void enterAltblLock(MySqlParser::AltblLockContext * /*ctx*/) override { }
  virtual void exitAltblLock(MySqlParser::AltblLockContext * /*ctx*/) override { }

  virtual void enterAltblColMod(MySqlParser::AltblColModContext * /*ctx*/) override { }
  virtual void exitAltblColMod(MySqlParser::AltblColModContext * /*ctx*/) override { }

  virtual void enterAltblColDrop(MySqlParser::AltblColDropContext * /*ctx*/) override { }
  virtual void exitAltblColDrop(MySqlParser::AltblColDropContext * /*ctx*/) override { }

  virtual void enterAltblDropPK(MySqlParser::AltblDropPKContext * /*ctx*/) override { }
  virtual void exitAltblDropPK(MySqlParser::AltblDropPKContext * /*ctx*/) override { }

  virtual void enterAltblDropIndex(MySqlParser::AltblDropIndexContext * /*ctx*/) override { }
  virtual void exitAltblDropIndex(MySqlParser::AltblDropIndexContext * /*ctx*/) override { }

  virtual void enterAltblDropFK(MySqlParser::AltblDropFKContext * /*ctx*/) override { }
  virtual void exitAltblDropFK(MySqlParser::AltblDropFKContext * /*ctx*/) override { }

  virtual void enterAltblDisKey(MySqlParser::AltblDisKeyContext * /*ctx*/) override { }
  virtual void exitAltblDisKey(MySqlParser::AltblDisKeyContext * /*ctx*/) override { }

  virtual void enterAltblEnKey(MySqlParser::AltblEnKeyContext * /*ctx*/) override { }
  virtual void exitAltblEnKey(MySqlParser::AltblEnKeyContext * /*ctx*/) override { }

  virtual void enterAltblRenameTbl(MySqlParser::AltblRenameTblContext * /*ctx*/) override { }
  virtual void exitAltblRenameTbl(MySqlParser::AltblRenameTblContext * /*ctx*/) override { }

  virtual void enterAltblResort(MySqlParser::AltblResortContext * /*ctx*/) override { }
  virtual void exitAltblResort(MySqlParser::AltblResortContext * /*ctx*/) override { }

  virtual void enterAltblConvert(MySqlParser::AltblConvertContext * /*ctx*/) override { }
  virtual void exitAltblConvert(MySqlParser::AltblConvertContext * /*ctx*/) override { }

  virtual void enterAltblDefCharset(MySqlParser::AltblDefCharsetContext * /*ctx*/) override { }
  virtual void exitAltblDefCharset(MySqlParser::AltblDefCharsetContext * /*ctx*/) override { }

  virtual void enterAltblDisTblspace(MySqlParser::AltblDisTblspaceContext * /*ctx*/) override { }
  virtual void exitAltblDisTblspace(MySqlParser::AltblDisTblspaceContext * /*ctx*/) override { }

  virtual void enterAltblImpTblSpace(MySqlParser::AltblImpTblSpaceContext * /*ctx*/) override { }
  virtual void exitAltblImpTblSpace(MySqlParser::AltblImpTblSpaceContext * /*ctx*/) override { }

  virtual void enterAltblForce(MySqlParser::AltblForceContext * /*ctx*/) override { }
  virtual void exitAltblForce(MySqlParser::AltblForceContext * /*ctx*/) override { }

  virtual void enterAltblValid(MySqlParser::AltblValidContext * /*ctx*/) override { }
  virtual void exitAltblValid(MySqlParser::AltblValidContext * /*ctx*/) override { }

  virtual void enterAltblAddPart(MySqlParser::AltblAddPartContext * /*ctx*/) override { }
  virtual void exitAltblAddPart(MySqlParser::AltblAddPartContext * /*ctx*/) override { }

  virtual void enterAltblDropPart(MySqlParser::AltblDropPartContext * /*ctx*/) override { }
  virtual void exitAltblDropPart(MySqlParser::AltblDropPartContext * /*ctx*/) override { }

  virtual void enterAltblDiscartPart(MySqlParser::AltblDiscartPartContext * /*ctx*/) override { }
  virtual void exitAltblDiscartPart(MySqlParser::AltblDiscartPartContext * /*ctx*/) override { }

  virtual void enterAltblImportPart(MySqlParser::AltblImportPartContext * /*ctx*/) override { }
  virtual void exitAltblImportPart(MySqlParser::AltblImportPartContext * /*ctx*/) override { }

  virtual void enterAltblTruncPart(MySqlParser::AltblTruncPartContext * /*ctx*/) override { }
  virtual void exitAltblTruncPart(MySqlParser::AltblTruncPartContext * /*ctx*/) override { }

  virtual void enterAltblCoalPart(MySqlParser::AltblCoalPartContext * /*ctx*/) override { }
  virtual void exitAltblCoalPart(MySqlParser::AltblCoalPartContext * /*ctx*/) override { }

  virtual void enterAltblReorgPart(MySqlParser::AltblReorgPartContext * /*ctx*/) override { }
  virtual void exitAltblReorgPart(MySqlParser::AltblReorgPartContext * /*ctx*/) override { }

  virtual void enterAltblExchPart(MySqlParser::AltblExchPartContext * /*ctx*/) override { }
  virtual void exitAltblExchPart(MySqlParser::AltblExchPartContext * /*ctx*/) override { }

  virtual void enterAltblAnalPart(MySqlParser::AltblAnalPartContext * /*ctx*/) override { }
  virtual void exitAltblAnalPart(MySqlParser::AltblAnalPartContext * /*ctx*/) override { }

  virtual void enterAltblCheckPart(MySqlParser::AltblCheckPartContext * /*ctx*/) override { }
  virtual void exitAltblCheckPart(MySqlParser::AltblCheckPartContext * /*ctx*/) override { }

  virtual void enterAltblOptimPart(MySqlParser::AltblOptimPartContext * /*ctx*/) override { }
  virtual void exitAltblOptimPart(MySqlParser::AltblOptimPartContext * /*ctx*/) override { }

  virtual void enterAltblRebuildPart(MySqlParser::AltblRebuildPartContext * /*ctx*/) override { }
  virtual void exitAltblRebuildPart(MySqlParser::AltblRebuildPartContext * /*ctx*/) override { }

  virtual void enterAltblRepairPart(MySqlParser::AltblRepairPartContext * /*ctx*/) override { }
  virtual void exitAltblRepairPart(MySqlParser::AltblRepairPartContext * /*ctx*/) override { }

  virtual void enterAltblRemovePart(MySqlParser::AltblRemovePartContext * /*ctx*/) override { }
  virtual void exitAltblRemovePart(MySqlParser::AltblRemovePartContext * /*ctx*/) override { }

  virtual void enterAltblUpgrPart(MySqlParser::AltblUpgrPartContext * /*ctx*/) override { }
  virtual void exitAltblUpgrPart(MySqlParser::AltblUpgrPartContext * /*ctx*/) override { }

  virtual void enterDrop_database(MySqlParser::Drop_databaseContext * /*ctx*/) override { }
  virtual void exitDrop_database(MySqlParser::Drop_databaseContext * /*ctx*/) override { }

  virtual void enterDrop_event(MySqlParser::Drop_eventContext * /*ctx*/) override { }
  virtual void exitDrop_event(MySqlParser::Drop_eventContext * /*ctx*/) override { }

  virtual void enterDrop_index(MySqlParser::Drop_indexContext * /*ctx*/) override { }
  virtual void exitDrop_index(MySqlParser::Drop_indexContext * /*ctx*/) override { }

  virtual void enterDrop_logfile_group(MySqlParser::Drop_logfile_groupContext * /*ctx*/) override { }
  virtual void exitDrop_logfile_group(MySqlParser::Drop_logfile_groupContext * /*ctx*/) override { }

  virtual void enterDrop_procedure(MySqlParser::Drop_procedureContext * /*ctx*/) override { }
  virtual void exitDrop_procedure(MySqlParser::Drop_procedureContext * /*ctx*/) override { }

  virtual void enterDrop_function(MySqlParser::Drop_functionContext * /*ctx*/) override { }
  virtual void exitDrop_function(MySqlParser::Drop_functionContext * /*ctx*/) override { }

  virtual void enterDrop_server(MySqlParser::Drop_serverContext * /*ctx*/) override { }
  virtual void exitDrop_server(MySqlParser::Drop_serverContext * /*ctx*/) override { }

  virtual void enterDrop_table(MySqlParser::Drop_tableContext * /*ctx*/) override { }
  virtual void exitDrop_table(MySqlParser::Drop_tableContext * /*ctx*/) override { }

  virtual void enterDrop_tablespace(MySqlParser::Drop_tablespaceContext * /*ctx*/) override { }
  virtual void exitDrop_tablespace(MySqlParser::Drop_tablespaceContext * /*ctx*/) override { }

  virtual void enterDrop_trigger(MySqlParser::Drop_triggerContext * /*ctx*/) override { }
  virtual void exitDrop_trigger(MySqlParser::Drop_triggerContext * /*ctx*/) override { }

  virtual void enterDrop_view(MySqlParser::Drop_viewContext * /*ctx*/) override { }
  virtual void exitDrop_view(MySqlParser::Drop_viewContext * /*ctx*/) override { }

  virtual void enterRename_table(MySqlParser::Rename_tableContext * /*ctx*/) override { }
  virtual void exitRename_table(MySqlParser::Rename_tableContext * /*ctx*/) override { }

  virtual void enterTruncate_table(MySqlParser::Truncate_tableContext * /*ctx*/) override { }
  virtual void exitTruncate_table(MySqlParser::Truncate_tableContext * /*ctx*/) override { }

  virtual void enterCall_statement(MySqlParser::Call_statementContext * /*ctx*/) override { }
  virtual void exitCall_statement(MySqlParser::Call_statementContext * /*ctx*/) override { }

  virtual void enterDelete_statement(MySqlParser::Delete_statementContext * /*ctx*/) override { }
  virtual void exitDelete_statement(MySqlParser::Delete_statementContext * /*ctx*/) override { }

  virtual void enterDo_statement(MySqlParser::Do_statementContext * /*ctx*/) override { }
  virtual void exitDo_statement(MySqlParser::Do_statementContext * /*ctx*/) override { }

  virtual void enterHandler_statement(MySqlParser::Handler_statementContext * /*ctx*/) override { }
  virtual void exitHandler_statement(MySqlParser::Handler_statementContext * /*ctx*/) override { }

  virtual void enterInsert_statement(MySqlParser::Insert_statementContext * /*ctx*/) override { }
  virtual void exitInsert_statement(MySqlParser::Insert_statementContext * /*ctx*/) override { }

  virtual void enterLoad_data_statement(MySqlParser::Load_data_statementContext * /*ctx*/) override { }
  virtual void exitLoad_data_statement(MySqlParser::Load_data_statementContext * /*ctx*/) override { }

  virtual void enterLoad_xml_statement(MySqlParser::Load_xml_statementContext * /*ctx*/) override { }
  virtual void exitLoad_xml_statement(MySqlParser::Load_xml_statementContext * /*ctx*/) override { }

  virtual void enterReplace_statement(MySqlParser::Replace_statementContext * /*ctx*/) override { }
  virtual void exitReplace_statement(MySqlParser::Replace_statementContext * /*ctx*/) override { }

  virtual void enterSimpleSelect(MySqlParser::SimpleSelectContext * /*ctx*/) override { }
  virtual void exitSimpleSelect(MySqlParser::SimpleSelectContext * /*ctx*/) override { }

  virtual void enterParenSelect(MySqlParser::ParenSelectContext * /*ctx*/) override { }
  virtual void exitParenSelect(MySqlParser::ParenSelectContext * /*ctx*/) override { }

  virtual void enterUnionSelect(MySqlParser::UnionSelectContext * /*ctx*/) override { }
  virtual void exitUnionSelect(MySqlParser::UnionSelectContext * /*ctx*/) override { }

  virtual void enterUnionParenSelect(MySqlParser::UnionParenSelectContext * /*ctx*/) override { }
  virtual void exitUnionParenSelect(MySqlParser::UnionParenSelectContext * /*ctx*/) override { }

  virtual void enterUpdate_statement(MySqlParser::Update_statementContext * /*ctx*/) override { }
  virtual void exitUpdate_statement(MySqlParser::Update_statementContext * /*ctx*/) override { }

  virtual void enterInsert_statement_value(MySqlParser::Insert_statement_valueContext * /*ctx*/) override { }
  virtual void exitInsert_statement_value(MySqlParser::Insert_statement_valueContext * /*ctx*/) override { }

  virtual void enterUpdate_elem(MySqlParser::Update_elemContext * /*ctx*/) override { }
  virtual void exitUpdate_elem(MySqlParser::Update_elemContext * /*ctx*/) override { }

  virtual void enterCol_or_uservar(MySqlParser::Col_or_uservarContext * /*ctx*/) override { }
  virtual void exitCol_or_uservar(MySqlParser::Col_or_uservarContext * /*ctx*/) override { }

  virtual void enterSingle_delete_statement(MySqlParser::Single_delete_statementContext * /*ctx*/) override { }
  virtual void exitSingle_delete_statement(MySqlParser::Single_delete_statementContext * /*ctx*/) override { }

  virtual void enterMultiple_delete_statement(MySqlParser::Multiple_delete_statementContext * /*ctx*/) override { }
  virtual void exitMultiple_delete_statement(MySqlParser::Multiple_delete_statementContext * /*ctx*/) override { }

  virtual void enterHandler_open_statement(MySqlParser::Handler_open_statementContext * /*ctx*/) override { }
  virtual void exitHandler_open_statement(MySqlParser::Handler_open_statementContext * /*ctx*/) override { }

  virtual void enterHandler_read_index_statement(MySqlParser::Handler_read_index_statementContext * /*ctx*/) override { }
  virtual void exitHandler_read_index_statement(MySqlParser::Handler_read_index_statementContext * /*ctx*/) override { }

  virtual void enterHandler_read_statement(MySqlParser::Handler_read_statementContext * /*ctx*/) override { }
  virtual void exitHandler_read_statement(MySqlParser::Handler_read_statementContext * /*ctx*/) override { }

  virtual void enterHandler_close_statement(MySqlParser::Handler_close_statementContext * /*ctx*/) override { }
  virtual void exitHandler_close_statement(MySqlParser::Handler_close_statementContext * /*ctx*/) override { }

  virtual void enterSingle_update_statement(MySqlParser::Single_update_statementContext * /*ctx*/) override { }
  virtual void exitSingle_update_statement(MySqlParser::Single_update_statementContext * /*ctx*/) override { }

  virtual void enterMultiple_update_statement(MySqlParser::Multiple_update_statementContext * /*ctx*/) override { }
  virtual void exitMultiple_update_statement(MySqlParser::Multiple_update_statementContext * /*ctx*/) override { }

  virtual void enterOrder_by_clause(MySqlParser::Order_by_clauseContext * /*ctx*/) override { }
  virtual void exitOrder_by_clause(MySqlParser::Order_by_clauseContext * /*ctx*/) override { }

  virtual void enterOrder_by_expression(MySqlParser::Order_by_expressionContext * /*ctx*/) override { }
  virtual void exitOrder_by_expression(MySqlParser::Order_by_expressionContext * /*ctx*/) override { }

  virtual void enterTable_sources(MySqlParser::Table_sourcesContext * /*ctx*/) override { }
  virtual void exitTable_sources(MySqlParser::Table_sourcesContext * /*ctx*/) override { }

  virtual void enterTable_source(MySqlParser::Table_sourceContext * /*ctx*/) override { }
  virtual void exitTable_source(MySqlParser::Table_sourceContext * /*ctx*/) override { }

  virtual void enterAtomTableItem(MySqlParser::AtomTableItemContext * /*ctx*/) override { }
  virtual void exitAtomTableItem(MySqlParser::AtomTableItemContext * /*ctx*/) override { }

  virtual void enterSubqueryTableItem(MySqlParser::SubqueryTableItemContext * /*ctx*/) override { }
  virtual void exitSubqueryTableItem(MySqlParser::SubqueryTableItemContext * /*ctx*/) override { }

  virtual void enterTableSourcesItem(MySqlParser::TableSourcesItemContext * /*ctx*/) override { }
  virtual void exitTableSourcesItem(MySqlParser::TableSourcesItemContext * /*ctx*/) override { }

  virtual void enterIndex_hint(MySqlParser::Index_hintContext * /*ctx*/) override { }
  virtual void exitIndex_hint(MySqlParser::Index_hintContext * /*ctx*/) override { }

  virtual void enterInnerJoin(MySqlParser::InnerJoinContext * /*ctx*/) override { }
  virtual void exitInnerJoin(MySqlParser::InnerJoinContext * /*ctx*/) override { }

  virtual void enterStraightJoin(MySqlParser::StraightJoinContext * /*ctx*/) override { }
  virtual void exitStraightJoin(MySqlParser::StraightJoinContext * /*ctx*/) override { }

  virtual void enterOuterJoin(MySqlParser::OuterJoinContext * /*ctx*/) override { }
  virtual void exitOuterJoin(MySqlParser::OuterJoinContext * /*ctx*/) override { }

  virtual void enterNaturalJoin(MySqlParser::NaturalJoinContext * /*ctx*/) override { }
  virtual void exitNaturalJoin(MySqlParser::NaturalJoinContext * /*ctx*/) override { }

  virtual void enterSubquery(MySqlParser::SubqueryContext * /*ctx*/) override { }
  virtual void exitSubquery(MySqlParser::SubqueryContext * /*ctx*/) override { }

  virtual void enterQuery_expression(MySqlParser::Query_expressionContext * /*ctx*/) override { }
  virtual void exitQuery_expression(MySqlParser::Query_expressionContext * /*ctx*/) override { }

  virtual void enterQuery_expression_nointo(MySqlParser::Query_expression_nointoContext * /*ctx*/) override { }
  virtual void exitQuery_expression_nointo(MySqlParser::Query_expression_nointoContext * /*ctx*/) override { }

  virtual void enterQuery_specification(MySqlParser::Query_specificationContext * /*ctx*/) override { }
  virtual void exitQuery_specification(MySqlParser::Query_specificationContext * /*ctx*/) override { }

  virtual void enterQuery_specification_nointo(MySqlParser::Query_specification_nointoContext * /*ctx*/) override { }
  virtual void exitQuery_specification_nointo(MySqlParser::Query_specification_nointoContext * /*ctx*/) override { }

  virtual void enterUnion_parenth(MySqlParser::Union_parenthContext * /*ctx*/) override { }
  virtual void exitUnion_parenth(MySqlParser::Union_parenthContext * /*ctx*/) override { }

  virtual void enterUnion_statement(MySqlParser::Union_statementContext * /*ctx*/) override { }
  virtual void exitUnion_statement(MySqlParser::Union_statementContext * /*ctx*/) override { }

  virtual void enterSelect_spec(MySqlParser::Select_specContext * /*ctx*/) override { }
  virtual void exitSelect_spec(MySqlParser::Select_specContext * /*ctx*/) override { }

  virtual void enterSelect_list(MySqlParser::Select_listContext * /*ctx*/) override { }
  virtual void exitSelect_list(MySqlParser::Select_listContext * /*ctx*/) override { }

  virtual void enterSellistelAllCol(MySqlParser::SellistelAllColContext * /*ctx*/) override { }
  virtual void exitSellistelAllCol(MySqlParser::SellistelAllColContext * /*ctx*/) override { }

  virtual void enterSellistelCol(MySqlParser::SellistelColContext * /*ctx*/) override { }
  virtual void exitSellistelCol(MySqlParser::SellistelColContext * /*ctx*/) override { }

  virtual void enterSellistelFunc(MySqlParser::SellistelFuncContext * /*ctx*/) override { }
  virtual void exitSellistelFunc(MySqlParser::SellistelFuncContext * /*ctx*/) override { }

  virtual void enterSellistelExpr(MySqlParser::SellistelExprContext * /*ctx*/) override { }
  virtual void exitSellistelExpr(MySqlParser::SellistelExprContext * /*ctx*/) override { }

  virtual void enterSelectIntoVars(MySqlParser::SelectIntoVarsContext * /*ctx*/) override { }
  virtual void exitSelectIntoVars(MySqlParser::SelectIntoVarsContext * /*ctx*/) override { }

  virtual void enterSelectIntoDump(MySqlParser::SelectIntoDumpContext * /*ctx*/) override { }
  virtual void exitSelectIntoDump(MySqlParser::SelectIntoDumpContext * /*ctx*/) override { }

  virtual void enterSelectIntoOutfile(MySqlParser::SelectIntoOutfileContext * /*ctx*/) override { }
  virtual void exitSelectIntoOutfile(MySqlParser::SelectIntoOutfileContext * /*ctx*/) override { }

  virtual void enterFrom_clause(MySqlParser::From_clauseContext * /*ctx*/) override { }
  virtual void exitFrom_clause(MySqlParser::From_clauseContext * /*ctx*/) override { }

  virtual void enterGroup_by_item(MySqlParser::Group_by_itemContext * /*ctx*/) override { }
  virtual void exitGroup_by_item(MySqlParser::Group_by_itemContext * /*ctx*/) override { }

  virtual void enterLimit_clause(MySqlParser::Limit_clauseContext * /*ctx*/) override { }
  virtual void exitLimit_clause(MySqlParser::Limit_clauseContext * /*ctx*/) override { }

  virtual void enterStart_transaction(MySqlParser::Start_transactionContext * /*ctx*/) override { }
  virtual void exitStart_transaction(MySqlParser::Start_transactionContext * /*ctx*/) override { }

  virtual void enterBegin_work(MySqlParser::Begin_workContext * /*ctx*/) override { }
  virtual void exitBegin_work(MySqlParser::Begin_workContext * /*ctx*/) override { }

  virtual void enterCommit_work(MySqlParser::Commit_workContext * /*ctx*/) override { }
  virtual void exitCommit_work(MySqlParser::Commit_workContext * /*ctx*/) override { }

  virtual void enterRollback_work(MySqlParser::Rollback_workContext * /*ctx*/) override { }
  virtual void exitRollback_work(MySqlParser::Rollback_workContext * /*ctx*/) override { }

  virtual void enterSavepoint_statement(MySqlParser::Savepoint_statementContext * /*ctx*/) override { }
  virtual void exitSavepoint_statement(MySqlParser::Savepoint_statementContext * /*ctx*/) override { }

  virtual void enterRollback_statement(MySqlParser::Rollback_statementContext * /*ctx*/) override { }
  virtual void exitRollback_statement(MySqlParser::Rollback_statementContext * /*ctx*/) override { }

  virtual void enterRelease_statement(MySqlParser::Release_statementContext * /*ctx*/) override { }
  virtual void exitRelease_statement(MySqlParser::Release_statementContext * /*ctx*/) override { }

  virtual void enterLock_tables(MySqlParser::Lock_tablesContext * /*ctx*/) override { }
  virtual void exitLock_tables(MySqlParser::Lock_tablesContext * /*ctx*/) override { }

  virtual void enterUnlock_tables(MySqlParser::Unlock_tablesContext * /*ctx*/) override { }
  virtual void exitUnlock_tables(MySqlParser::Unlock_tablesContext * /*ctx*/) override { }

  virtual void enterSet_autocommit_statement(MySqlParser::Set_autocommit_statementContext * /*ctx*/) override { }
  virtual void exitSet_autocommit_statement(MySqlParser::Set_autocommit_statementContext * /*ctx*/) override { }

  virtual void enterSet_transaction_statement(MySqlParser::Set_transaction_statementContext * /*ctx*/) override { }
  virtual void exitSet_transaction_statement(MySqlParser::Set_transaction_statementContext * /*ctx*/) override { }

  virtual void enterTransact_option(MySqlParser::Transact_optionContext * /*ctx*/) override { }
  virtual void exitTransact_option(MySqlParser::Transact_optionContext * /*ctx*/) override { }

  virtual void enterLock_table_element(MySqlParser::Lock_table_elementContext * /*ctx*/) override { }
  virtual void exitLock_table_element(MySqlParser::Lock_table_elementContext * /*ctx*/) override { }

  virtual void enterTrans_characteristic(MySqlParser::Trans_characteristicContext * /*ctx*/) override { }
  virtual void exitTrans_characteristic(MySqlParser::Trans_characteristicContext * /*ctx*/) override { }

  virtual void enterTransaction_level(MySqlParser::Transaction_levelContext * /*ctx*/) override { }
  virtual void exitTransaction_level(MySqlParser::Transaction_levelContext * /*ctx*/) override { }

  virtual void enterChange_master(MySqlParser::Change_masterContext * /*ctx*/) override { }
  virtual void exitChange_master(MySqlParser::Change_masterContext * /*ctx*/) override { }

  virtual void enterChange_repl_filter(MySqlParser::Change_repl_filterContext * /*ctx*/) override { }
  virtual void exitChange_repl_filter(MySqlParser::Change_repl_filterContext * /*ctx*/) override { }

  virtual void enterPurge_binary_logs(MySqlParser::Purge_binary_logsContext * /*ctx*/) override { }
  virtual void exitPurge_binary_logs(MySqlParser::Purge_binary_logsContext * /*ctx*/) override { }

  virtual void enterReset_master(MySqlParser::Reset_masterContext * /*ctx*/) override { }
  virtual void exitReset_master(MySqlParser::Reset_masterContext * /*ctx*/) override { }

  virtual void enterReset_slave(MySqlParser::Reset_slaveContext * /*ctx*/) override { }
  virtual void exitReset_slave(MySqlParser::Reset_slaveContext * /*ctx*/) override { }

  virtual void enterStart_slave(MySqlParser::Start_slaveContext * /*ctx*/) override { }
  virtual void exitStart_slave(MySqlParser::Start_slaveContext * /*ctx*/) override { }

  virtual void enterStop_slave(MySqlParser::Stop_slaveContext * /*ctx*/) override { }
  virtual void exitStop_slave(MySqlParser::Stop_slaveContext * /*ctx*/) override { }

  virtual void enterStart_group_repl(MySqlParser::Start_group_replContext * /*ctx*/) override { }
  virtual void exitStart_group_repl(MySqlParser::Start_group_replContext * /*ctx*/) override { }

  virtual void enterStop_group_repl(MySqlParser::Stop_group_replContext * /*ctx*/) override { }
  virtual void exitStop_group_repl(MySqlParser::Stop_group_replContext * /*ctx*/) override { }

  virtual void enterMasterOptString(MySqlParser::MasterOptStringContext * /*ctx*/) override { }
  virtual void exitMasterOptString(MySqlParser::MasterOptStringContext * /*ctx*/) override { }

  virtual void enterMasterOptDecimal(MySqlParser::MasterOptDecimalContext * /*ctx*/) override { }
  virtual void exitMasterOptDecimal(MySqlParser::MasterOptDecimalContext * /*ctx*/) override { }

  virtual void enterMasterOptBool(MySqlParser::MasterOptBoolContext * /*ctx*/) override { }
  virtual void exitMasterOptBool(MySqlParser::MasterOptBoolContext * /*ctx*/) override { }

  virtual void enterMasterOptReal(MySqlParser::MasterOptRealContext * /*ctx*/) override { }
  virtual void exitMasterOptReal(MySqlParser::MasterOptRealContext * /*ctx*/) override { }

  virtual void enterMasterOptIdList(MySqlParser::MasterOptIdListContext * /*ctx*/) override { }
  virtual void exitMasterOptIdList(MySqlParser::MasterOptIdListContext * /*ctx*/) override { }

  virtual void enterString_master_option(MySqlParser::String_master_optionContext * /*ctx*/) override { }
  virtual void exitString_master_option(MySqlParser::String_master_optionContext * /*ctx*/) override { }

  virtual void enterDecimal_master_option(MySqlParser::Decimal_master_optionContext * /*ctx*/) override { }
  virtual void exitDecimal_master_option(MySqlParser::Decimal_master_optionContext * /*ctx*/) override { }

  virtual void enterBool_master_option(MySqlParser::Bool_master_optionContext * /*ctx*/) override { }
  virtual void exitBool_master_option(MySqlParser::Bool_master_optionContext * /*ctx*/) override { }

  virtual void enterChannel_option(MySqlParser::Channel_optionContext * /*ctx*/) override { }
  virtual void exitChannel_option(MySqlParser::Channel_optionContext * /*ctx*/) override { }

  virtual void enterReplfilterDbList(MySqlParser::ReplfilterDbListContext * /*ctx*/) override { }
  virtual void exitReplfilterDbList(MySqlParser::ReplfilterDbListContext * /*ctx*/) override { }

  virtual void enterReplfilterTableList(MySqlParser::ReplfilterTableListContext * /*ctx*/) override { }
  virtual void exitReplfilterTableList(MySqlParser::ReplfilterTableListContext * /*ctx*/) override { }

  virtual void enterReplfilterStableList(MySqlParser::ReplfilterStableListContext * /*ctx*/) override { }
  virtual void exitReplfilterStableList(MySqlParser::ReplfilterStableListContext * /*ctx*/) override { }

  virtual void enterReplfilterTablepairList(MySqlParser::ReplfilterTablepairListContext * /*ctx*/) override { }
  virtual void exitReplfilterTablepairList(MySqlParser::ReplfilterTablepairListContext * /*ctx*/) override { }

  virtual void enterThread_type(MySqlParser::Thread_typeContext * /*ctx*/) override { }
  virtual void exitThread_type(MySqlParser::Thread_typeContext * /*ctx*/) override { }

  virtual void enterUntilGtidSset(MySqlParser::UntilGtidSsetContext * /*ctx*/) override { }
  virtual void exitUntilGtidSset(MySqlParser::UntilGtidSsetContext * /*ctx*/) override { }

  virtual void enterUntilMasterLog(MySqlParser::UntilMasterLogContext * /*ctx*/) override { }
  virtual void exitUntilMasterLog(MySqlParser::UntilMasterLogContext * /*ctx*/) override { }

  virtual void enterUntilRelayLog(MySqlParser::UntilRelayLogContext * /*ctx*/) override { }
  virtual void exitUntilRelayLog(MySqlParser::UntilRelayLogContext * /*ctx*/) override { }

  virtual void enterUntilSqlGaps(MySqlParser::UntilSqlGapsContext * /*ctx*/) override { }
  virtual void exitUntilSqlGaps(MySqlParser::UntilSqlGapsContext * /*ctx*/) override { }

  virtual void enterStart_slave_connection_option(MySqlParser::Start_slave_connection_optionContext * /*ctx*/) override { }
  virtual void exitStart_slave_connection_option(MySqlParser::Start_slave_connection_optionContext * /*ctx*/) override { }

  virtual void enterGtid_set(MySqlParser::Gtid_setContext * /*ctx*/) override { }
  virtual void exitGtid_set(MySqlParser::Gtid_setContext * /*ctx*/) override { }

  virtual void enterXa_start_transaction(MySqlParser::Xa_start_transactionContext * /*ctx*/) override { }
  virtual void exitXa_start_transaction(MySqlParser::Xa_start_transactionContext * /*ctx*/) override { }

  virtual void enterXa_end_transaction(MySqlParser::Xa_end_transactionContext * /*ctx*/) override { }
  virtual void exitXa_end_transaction(MySqlParser::Xa_end_transactionContext * /*ctx*/) override { }

  virtual void enterXa_prepare(MySqlParser::Xa_prepareContext * /*ctx*/) override { }
  virtual void exitXa_prepare(MySqlParser::Xa_prepareContext * /*ctx*/) override { }

  virtual void enterXa_commit_work(MySqlParser::Xa_commit_workContext * /*ctx*/) override { }
  virtual void exitXa_commit_work(MySqlParser::Xa_commit_workContext * /*ctx*/) override { }

  virtual void enterXa_rollback_work(MySqlParser::Xa_rollback_workContext * /*ctx*/) override { }
  virtual void exitXa_rollback_work(MySqlParser::Xa_rollback_workContext * /*ctx*/) override { }

  virtual void enterXa_recover_work(MySqlParser::Xa_recover_workContext * /*ctx*/) override { }
  virtual void exitXa_recover_work(MySqlParser::Xa_recover_workContext * /*ctx*/) override { }

  virtual void enterPrepare_statement(MySqlParser::Prepare_statementContext * /*ctx*/) override { }
  virtual void exitPrepare_statement(MySqlParser::Prepare_statementContext * /*ctx*/) override { }

  virtual void enterExecute_statement(MySqlParser::Execute_statementContext * /*ctx*/) override { }
  virtual void exitExecute_statement(MySqlParser::Execute_statementContext * /*ctx*/) override { }

  virtual void enterDeallocate_prepare(MySqlParser::Deallocate_prepareContext * /*ctx*/) override { }
  virtual void exitDeallocate_prepare(MySqlParser::Deallocate_prepareContext * /*ctx*/) override { }

  virtual void enterRoutine_body(MySqlParser::Routine_bodyContext * /*ctx*/) override { }
  virtual void exitRoutine_body(MySqlParser::Routine_bodyContext * /*ctx*/) override { }

  virtual void enterBlock_statement(MySqlParser::Block_statementContext * /*ctx*/) override { }
  virtual void exitBlock_statement(MySqlParser::Block_statementContext * /*ctx*/) override { }

  virtual void enterCase_statement(MySqlParser::Case_statementContext * /*ctx*/) override { }
  virtual void exitCase_statement(MySqlParser::Case_statementContext * /*ctx*/) override { }

  virtual void enterIf_statement(MySqlParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(MySqlParser::If_statementContext * /*ctx*/) override { }

  virtual void enterIterate_statement(MySqlParser::Iterate_statementContext * /*ctx*/) override { }
  virtual void exitIterate_statement(MySqlParser::Iterate_statementContext * /*ctx*/) override { }

  virtual void enterLeave_statement(MySqlParser::Leave_statementContext * /*ctx*/) override { }
  virtual void exitLeave_statement(MySqlParser::Leave_statementContext * /*ctx*/) override { }

  virtual void enterLoop_statement(MySqlParser::Loop_statementContext * /*ctx*/) override { }
  virtual void exitLoop_statement(MySqlParser::Loop_statementContext * /*ctx*/) override { }

  virtual void enterRepeat_statement(MySqlParser::Repeat_statementContext * /*ctx*/) override { }
  virtual void exitRepeat_statement(MySqlParser::Repeat_statementContext * /*ctx*/) override { }

  virtual void enterReturn_statement(MySqlParser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(MySqlParser::Return_statementContext * /*ctx*/) override { }

  virtual void enterWhile_statement(MySqlParser::While_statementContext * /*ctx*/) override { }
  virtual void exitWhile_statement(MySqlParser::While_statementContext * /*ctx*/) override { }

  virtual void enterCursor_statement(MySqlParser::Cursor_statementContext * /*ctx*/) override { }
  virtual void exitCursor_statement(MySqlParser::Cursor_statementContext * /*ctx*/) override { }

  virtual void enterDeclare_variable(MySqlParser::Declare_variableContext * /*ctx*/) override { }
  virtual void exitDeclare_variable(MySqlParser::Declare_variableContext * /*ctx*/) override { }

  virtual void enterDeclare_condition(MySqlParser::Declare_conditionContext * /*ctx*/) override { }
  virtual void exitDeclare_condition(MySqlParser::Declare_conditionContext * /*ctx*/) override { }

  virtual void enterDeclare_cursor(MySqlParser::Declare_cursorContext * /*ctx*/) override { }
  virtual void exitDeclare_cursor(MySqlParser::Declare_cursorContext * /*ctx*/) override { }

  virtual void enterDeclare_handler(MySqlParser::Declare_handlerContext * /*ctx*/) override { }
  virtual void exitDeclare_handler(MySqlParser::Declare_handlerContext * /*ctx*/) override { }

  virtual void enterHandler_condition_value(MySqlParser::Handler_condition_valueContext * /*ctx*/) override { }
  virtual void exitHandler_condition_value(MySqlParser::Handler_condition_valueContext * /*ctx*/) override { }

  virtual void enterProcedure_sql_statement(MySqlParser::Procedure_sql_statementContext * /*ctx*/) override { }
  virtual void exitProcedure_sql_statement(MySqlParser::Procedure_sql_statementContext * /*ctx*/) override { }

  virtual void enterAlterUserMysql56(MySqlParser::AlterUserMysql56Context * /*ctx*/) override { }
  virtual void exitAlterUserMysql56(MySqlParser::AlterUserMysql56Context * /*ctx*/) override { }

  virtual void enterAlterUserMysql57(MySqlParser::AlterUserMysql57Context * /*ctx*/) override { }
  virtual void exitAlterUserMysql57(MySqlParser::AlterUserMysql57Context * /*ctx*/) override { }

  virtual void enterCreateUserMysql56(MySqlParser::CreateUserMysql56Context * /*ctx*/) override { }
  virtual void exitCreateUserMysql56(MySqlParser::CreateUserMysql56Context * /*ctx*/) override { }

  virtual void enterCreateUserMysql57(MySqlParser::CreateUserMysql57Context * /*ctx*/) override { }
  virtual void exitCreateUserMysql57(MySqlParser::CreateUserMysql57Context * /*ctx*/) override { }

  virtual void enterDrop_user(MySqlParser::Drop_userContext * /*ctx*/) override { }
  virtual void exitDrop_user(MySqlParser::Drop_userContext * /*ctx*/) override { }

  virtual void enterGrant_statement(MySqlParser::Grant_statementContext * /*ctx*/) override { }
  virtual void exitGrant_statement(MySqlParser::Grant_statementContext * /*ctx*/) override { }

  virtual void enterGrant_proxy(MySqlParser::Grant_proxyContext * /*ctx*/) override { }
  virtual void exitGrant_proxy(MySqlParser::Grant_proxyContext * /*ctx*/) override { }

  virtual void enterRename_user(MySqlParser::Rename_userContext * /*ctx*/) override { }
  virtual void exitRename_user(MySqlParser::Rename_userContext * /*ctx*/) override { }

  virtual void enterDetailRevoke(MySqlParser::DetailRevokeContext * /*ctx*/) override { }
  virtual void exitDetailRevoke(MySqlParser::DetailRevokeContext * /*ctx*/) override { }

  virtual void enterShortRevoke(MySqlParser::ShortRevokeContext * /*ctx*/) override { }
  virtual void exitShortRevoke(MySqlParser::ShortRevokeContext * /*ctx*/) override { }

  virtual void enterRevoke_proxy(MySqlParser::Revoke_proxyContext * /*ctx*/) override { }
  virtual void exitRevoke_proxy(MySqlParser::Revoke_proxyContext * /*ctx*/) override { }

  virtual void enterSet_password_statement(MySqlParser::Set_password_statementContext * /*ctx*/) override { }
  virtual void exitSet_password_statement(MySqlParser::Set_password_statementContext * /*ctx*/) override { }

  virtual void enterUser_password_option(MySqlParser::User_password_optionContext * /*ctx*/) override { }
  virtual void exitUser_password_option(MySqlParser::User_password_optionContext * /*ctx*/) override { }

  virtual void enterAuthByPassword(MySqlParser::AuthByPasswordContext * /*ctx*/) override { }
  virtual void exitAuthByPassword(MySqlParser::AuthByPasswordContext * /*ctx*/) override { }

  virtual void enterAuthByString(MySqlParser::AuthByStringContext * /*ctx*/) override { }
  virtual void exitAuthByString(MySqlParser::AuthByStringContext * /*ctx*/) override { }

  virtual void enterAuthByHash(MySqlParser::AuthByHashContext * /*ctx*/) override { }
  virtual void exitAuthByHash(MySqlParser::AuthByHashContext * /*ctx*/) override { }

  virtual void enterTls_option(MySqlParser::Tls_optionContext * /*ctx*/) override { }
  virtual void exitTls_option(MySqlParser::Tls_optionContext * /*ctx*/) override { }

  virtual void enterUser_resource_option(MySqlParser::User_resource_optionContext * /*ctx*/) override { }
  virtual void exitUser_resource_option(MySqlParser::User_resource_optionContext * /*ctx*/) override { }

  virtual void enterUser_lock_option(MySqlParser::User_lock_optionContext * /*ctx*/) override { }
  virtual void exitUser_lock_option(MySqlParser::User_lock_optionContext * /*ctx*/) override { }

  virtual void enterPrivelege_clause(MySqlParser::Privelege_clauseContext * /*ctx*/) override { }
  virtual void exitPrivelege_clause(MySqlParser::Privelege_clauseContext * /*ctx*/) override { }

  virtual void enterPrivilege(MySqlParser::PrivilegeContext * /*ctx*/) override { }
  virtual void exitPrivilege(MySqlParser::PrivilegeContext * /*ctx*/) override { }

  virtual void enterPrivilege_level(MySqlParser::Privilege_levelContext * /*ctx*/) override { }
  virtual void exitPrivilege_level(MySqlParser::Privilege_levelContext * /*ctx*/) override { }

  virtual void enterSet_password_option(MySqlParser::Set_password_optionContext * /*ctx*/) override { }
  virtual void exitSet_password_option(MySqlParser::Set_password_optionContext * /*ctx*/) override { }

  virtual void enterAnalyze_table(MySqlParser::Analyze_tableContext * /*ctx*/) override { }
  virtual void exitAnalyze_table(MySqlParser::Analyze_tableContext * /*ctx*/) override { }

  virtual void enterCheck_table(MySqlParser::Check_tableContext * /*ctx*/) override { }
  virtual void exitCheck_table(MySqlParser::Check_tableContext * /*ctx*/) override { }

  virtual void enterChecksum_table(MySqlParser::Checksum_tableContext * /*ctx*/) override { }
  virtual void exitChecksum_table(MySqlParser::Checksum_tableContext * /*ctx*/) override { }

  virtual void enterOptimize_table(MySqlParser::Optimize_tableContext * /*ctx*/) override { }
  virtual void exitOptimize_table(MySqlParser::Optimize_tableContext * /*ctx*/) override { }

  virtual void enterRepair_table(MySqlParser::Repair_tableContext * /*ctx*/) override { }
  virtual void exitRepair_table(MySqlParser::Repair_tableContext * /*ctx*/) override { }

  virtual void enterCheck_table_option(MySqlParser::Check_table_optionContext * /*ctx*/) override { }
  virtual void exitCheck_table_option(MySqlParser::Check_table_optionContext * /*ctx*/) override { }

  virtual void enterCreate_udfunction(MySqlParser::Create_udfunctionContext * /*ctx*/) override { }
  virtual void exitCreate_udfunction(MySqlParser::Create_udfunctionContext * /*ctx*/) override { }

  virtual void enterInstall_plugin(MySqlParser::Install_pluginContext * /*ctx*/) override { }
  virtual void exitInstall_plugin(MySqlParser::Install_pluginContext * /*ctx*/) override { }

  virtual void enterUninstall_plugin(MySqlParser::Uninstall_pluginContext * /*ctx*/) override { }
  virtual void exitUninstall_plugin(MySqlParser::Uninstall_pluginContext * /*ctx*/) override { }

  virtual void enterSetVariableAssignment(MySqlParser::SetVariableAssignmentContext * /*ctx*/) override { }
  virtual void exitSetVariableAssignment(MySqlParser::SetVariableAssignmentContext * /*ctx*/) override { }

  virtual void enterSetCharset(MySqlParser::SetCharsetContext * /*ctx*/) override { }
  virtual void exitSetCharset(MySqlParser::SetCharsetContext * /*ctx*/) override { }

  virtual void enterSetNames(MySqlParser::SetNamesContext * /*ctx*/) override { }
  virtual void exitSetNames(MySqlParser::SetNamesContext * /*ctx*/) override { }

  virtual void enterSetPasswordStatement(MySqlParser::SetPasswordStatementContext * /*ctx*/) override { }
  virtual void exitSetPasswordStatement(MySqlParser::SetPasswordStatementContext * /*ctx*/) override { }

  virtual void enterSetTransaction(MySqlParser::SetTransactionContext * /*ctx*/) override { }
  virtual void exitSetTransaction(MySqlParser::SetTransactionContext * /*ctx*/) override { }

  virtual void enterSetAutocommit(MySqlParser::SetAutocommitContext * /*ctx*/) override { }
  virtual void exitSetAutocommit(MySqlParser::SetAutocommitContext * /*ctx*/) override { }

  virtual void enterShowMasterlogs(MySqlParser::ShowMasterlogsContext * /*ctx*/) override { }
  virtual void exitShowMasterlogs(MySqlParser::ShowMasterlogsContext * /*ctx*/) override { }

  virtual void enterShowLogevents(MySqlParser::ShowLogeventsContext * /*ctx*/) override { }
  virtual void exitShowLogevents(MySqlParser::ShowLogeventsContext * /*ctx*/) override { }

  virtual void enterShowObjWithFilter(MySqlParser::ShowObjWithFilterContext * /*ctx*/) override { }
  virtual void exitShowObjWithFilter(MySqlParser::ShowObjWithFilterContext * /*ctx*/) override { }

  virtual void enterShowColumns(MySqlParser::ShowColumnsContext * /*ctx*/) override { }
  virtual void exitShowColumns(MySqlParser::ShowColumnsContext * /*ctx*/) override { }

  virtual void enterShowCreateDb(MySqlParser::ShowCreateDbContext * /*ctx*/) override { }
  virtual void exitShowCreateDb(MySqlParser::ShowCreateDbContext * /*ctx*/) override { }

  virtual void enterShowCreateFullidobj(MySqlParser::ShowCreateFullidobjContext * /*ctx*/) override { }
  virtual void exitShowCreateFullidobj(MySqlParser::ShowCreateFullidobjContext * /*ctx*/) override { }

  virtual void enterShowCreateUser(MySqlParser::ShowCreateUserContext * /*ctx*/) override { }
  virtual void exitShowCreateUser(MySqlParser::ShowCreateUserContext * /*ctx*/) override { }

  virtual void enterShowEngine(MySqlParser::ShowEngineContext * /*ctx*/) override { }
  virtual void exitShowEngine(MySqlParser::ShowEngineContext * /*ctx*/) override { }

  virtual void enterShowGlobalinfo(MySqlParser::ShowGlobalinfoContext * /*ctx*/) override { }
  virtual void exitShowGlobalinfo(MySqlParser::ShowGlobalinfoContext * /*ctx*/) override { }

  virtual void enterShowErrWarn(MySqlParser::ShowErrWarnContext * /*ctx*/) override { }
  virtual void exitShowErrWarn(MySqlParser::ShowErrWarnContext * /*ctx*/) override { }

  virtual void enterShowCountErrWarn(MySqlParser::ShowCountErrWarnContext * /*ctx*/) override { }
  virtual void exitShowCountErrWarn(MySqlParser::ShowCountErrWarnContext * /*ctx*/) override { }

  virtual void enterShowFromschemaFilter(MySqlParser::ShowFromschemaFilterContext * /*ctx*/) override { }
  virtual void exitShowFromschemaFilter(MySqlParser::ShowFromschemaFilterContext * /*ctx*/) override { }

  virtual void enterShowRoutinecode(MySqlParser::ShowRoutinecodeContext * /*ctx*/) override { }
  virtual void exitShowRoutinecode(MySqlParser::ShowRoutinecodeContext * /*ctx*/) override { }

  virtual void enterShowGrants(MySqlParser::ShowGrantsContext * /*ctx*/) override { }
  virtual void exitShowGrants(MySqlParser::ShowGrantsContext * /*ctx*/) override { }

  virtual void enterShowIndexes(MySqlParser::ShowIndexesContext * /*ctx*/) override { }
  virtual void exitShowIndexes(MySqlParser::ShowIndexesContext * /*ctx*/) override { }

  virtual void enterShowOpentables(MySqlParser::ShowOpentablesContext * /*ctx*/) override { }
  virtual void exitShowOpentables(MySqlParser::ShowOpentablesContext * /*ctx*/) override { }

  virtual void enterShowProfile(MySqlParser::ShowProfileContext * /*ctx*/) override { }
  virtual void exitShowProfile(MySqlParser::ShowProfileContext * /*ctx*/) override { }

  virtual void enterShowSlavestatus(MySqlParser::ShowSlavestatusContext * /*ctx*/) override { }
  virtual void exitShowSlavestatus(MySqlParser::ShowSlavestatusContext * /*ctx*/) override { }

  virtual void enterVariable_clause(MySqlParser::Variable_clauseContext * /*ctx*/) override { }
  virtual void exitVariable_clause(MySqlParser::Variable_clauseContext * /*ctx*/) override { }

  virtual void enterShow_filter(MySqlParser::Show_filterContext * /*ctx*/) override { }
  virtual void exitShow_filter(MySqlParser::Show_filterContext * /*ctx*/) override { }

  virtual void enterShow_profile_type(MySqlParser::Show_profile_typeContext * /*ctx*/) override { }
  virtual void exitShow_profile_type(MySqlParser::Show_profile_typeContext * /*ctx*/) override { }

  virtual void enterBinlog_statement(MySqlParser::Binlog_statementContext * /*ctx*/) override { }
  virtual void exitBinlog_statement(MySqlParser::Binlog_statementContext * /*ctx*/) override { }

  virtual void enterCache_index_statement(MySqlParser::Cache_index_statementContext * /*ctx*/) override { }
  virtual void exitCache_index_statement(MySqlParser::Cache_index_statementContext * /*ctx*/) override { }

  virtual void enterFlush_statement(MySqlParser::Flush_statementContext * /*ctx*/) override { }
  virtual void exitFlush_statement(MySqlParser::Flush_statementContext * /*ctx*/) override { }

  virtual void enterKill_statement(MySqlParser::Kill_statementContext * /*ctx*/) override { }
  virtual void exitKill_statement(MySqlParser::Kill_statementContext * /*ctx*/) override { }

  virtual void enterLoad_index_into_cache(MySqlParser::Load_index_into_cacheContext * /*ctx*/) override { }
  virtual void exitLoad_index_into_cache(MySqlParser::Load_index_into_cacheContext * /*ctx*/) override { }

  virtual void enterReset_statement(MySqlParser::Reset_statementContext * /*ctx*/) override { }
  virtual void exitReset_statement(MySqlParser::Reset_statementContext * /*ctx*/) override { }

  virtual void enterShutdown_statement(MySqlParser::Shutdown_statementContext * /*ctx*/) override { }
  virtual void exitShutdown_statement(MySqlParser::Shutdown_statementContext * /*ctx*/) override { }

  virtual void enterTbl_index_list(MySqlParser::Tbl_index_listContext * /*ctx*/) override { }
  virtual void exitTbl_index_list(MySqlParser::Tbl_index_listContext * /*ctx*/) override { }

  virtual void enterFlush_option(MySqlParser::Flush_optionContext * /*ctx*/) override { }
  virtual void exitFlush_option(MySqlParser::Flush_optionContext * /*ctx*/) override { }

  virtual void enterLoad_tbl_index_list(MySqlParser::Load_tbl_index_listContext * /*ctx*/) override { }
  virtual void exitLoad_tbl_index_list(MySqlParser::Load_tbl_index_listContext * /*ctx*/) override { }

  virtual void enterSimple_describe_statement(MySqlParser::Simple_describe_statementContext * /*ctx*/) override { }
  virtual void exitSimple_describe_statement(MySqlParser::Simple_describe_statementContext * /*ctx*/) override { }

  virtual void enterFull_describe_statement(MySqlParser::Full_describe_statementContext * /*ctx*/) override { }
  virtual void exitFull_describe_statement(MySqlParser::Full_describe_statementContext * /*ctx*/) override { }

  virtual void enterHelp_statement(MySqlParser::Help_statementContext * /*ctx*/) override { }
  virtual void exitHelp_statement(MySqlParser::Help_statementContext * /*ctx*/) override { }

  virtual void enterUse_statement(MySqlParser::Use_statementContext * /*ctx*/) override { }
  virtual void exitUse_statement(MySqlParser::Use_statementContext * /*ctx*/) override { }

  virtual void enterDescstmtDescObj(MySqlParser::DescstmtDescObjContext * /*ctx*/) override { }
  virtual void exitDescstmtDescObj(MySqlParser::DescstmtDescObjContext * /*ctx*/) override { }

  virtual void enterConnectionDescObj(MySqlParser::ConnectionDescObjContext * /*ctx*/) override { }
  virtual void exitConnectionDescObj(MySqlParser::ConnectionDescObjContext * /*ctx*/) override { }

  virtual void enterTable_name(MySqlParser::Table_nameContext * /*ctx*/) override { }
  virtual void exitTable_name(MySqlParser::Table_nameContext * /*ctx*/) override { }

  virtual void enterFull_id(MySqlParser::Full_idContext * /*ctx*/) override { }
  virtual void exitFull_id(MySqlParser::Full_idContext * /*ctx*/) override { }

  virtual void enterFull_column_name(MySqlParser::Full_column_nameContext * /*ctx*/) override { }
  virtual void exitFull_column_name(MySqlParser::Full_column_nameContext * /*ctx*/) override { }

  virtual void enterIndex_col_name(MySqlParser::Index_col_nameContext * /*ctx*/) override { }
  virtual void exitIndex_col_name(MySqlParser::Index_col_nameContext * /*ctx*/) override { }

  virtual void enterUser_name(MySqlParser::User_nameContext * /*ctx*/) override { }
  virtual void exitUser_name(MySqlParser::User_nameContext * /*ctx*/) override { }

  virtual void enterMysql_variable(MySqlParser::Mysql_variableContext * /*ctx*/) override { }
  virtual void exitMysql_variable(MySqlParser::Mysql_variableContext * /*ctx*/) override { }

  virtual void enterCharset_name(MySqlParser::Charset_nameContext * /*ctx*/) override { }
  virtual void exitCharset_name(MySqlParser::Charset_nameContext * /*ctx*/) override { }

  virtual void enterCollation_name(MySqlParser::Collation_nameContext * /*ctx*/) override { }
  virtual void exitCollation_name(MySqlParser::Collation_nameContext * /*ctx*/) override { }

  virtual void enterEngine_name(MySqlParser::Engine_nameContext * /*ctx*/) override { }
  virtual void exitEngine_name(MySqlParser::Engine_nameContext * /*ctx*/) override { }

  virtual void enterUuid_set(MySqlParser::Uuid_setContext * /*ctx*/) override { }
  virtual void exitUuid_set(MySqlParser::Uuid_setContext * /*ctx*/) override { }

  virtual void enterXid(MySqlParser::XidContext * /*ctx*/) override { }
  virtual void exitXid(MySqlParser::XidContext * /*ctx*/) override { }

  virtual void enterXid_string_id(MySqlParser::Xid_string_idContext * /*ctx*/) override { }
  virtual void exitXid_string_id(MySqlParser::Xid_string_idContext * /*ctx*/) override { }

  virtual void enterAuth_plugin(MySqlParser::Auth_pluginContext * /*ctx*/) override { }
  virtual void exitAuth_plugin(MySqlParser::Auth_pluginContext * /*ctx*/) override { }

  virtual void enterId_(MySqlParser::Id_Context * /*ctx*/) override { }
  virtual void exitId_(MySqlParser::Id_Context * /*ctx*/) override { }

  virtual void enterSimple_id(MySqlParser::Simple_idContext * /*ctx*/) override { }
  virtual void exitSimple_id(MySqlParser::Simple_idContext * /*ctx*/) override { }

  virtual void enterDot_ext_id(MySqlParser::Dot_ext_idContext * /*ctx*/) override { }
  virtual void exitDot_ext_id(MySqlParser::Dot_ext_idContext * /*ctx*/) override { }

  virtual void enterDecimal_literal(MySqlParser::Decimal_literalContext * /*ctx*/) override { }
  virtual void exitDecimal_literal(MySqlParser::Decimal_literalContext * /*ctx*/) override { }

  virtual void enterFilesize_literal(MySqlParser::Filesize_literalContext * /*ctx*/) override { }
  virtual void exitFilesize_literal(MySqlParser::Filesize_literalContext * /*ctx*/) override { }

  virtual void enterString_literal(MySqlParser::String_literalContext * /*ctx*/) override { }
  virtual void exitString_literal(MySqlParser::String_literalContext * /*ctx*/) override { }

  virtual void enterBoolean_literal(MySqlParser::Boolean_literalContext * /*ctx*/) override { }
  virtual void exitBoolean_literal(MySqlParser::Boolean_literalContext * /*ctx*/) override { }

  virtual void enterHexadecimal_literal(MySqlParser::Hexadecimal_literalContext * /*ctx*/) override { }
  virtual void exitHexadecimal_literal(MySqlParser::Hexadecimal_literalContext * /*ctx*/) override { }

  virtual void enterNull_notnull(MySqlParser::Null_notnullContext * /*ctx*/) override { }
  virtual void exitNull_notnull(MySqlParser::Null_notnullContext * /*ctx*/) override { }

  virtual void enterConstant(MySqlParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(MySqlParser::ConstantContext * /*ctx*/) override { }

  virtual void enterCharDatatype(MySqlParser::CharDatatypeContext * /*ctx*/) override { }
  virtual void exitCharDatatype(MySqlParser::CharDatatypeContext * /*ctx*/) override { }

  virtual void enterDimensionDatatype(MySqlParser::DimensionDatatypeContext * /*ctx*/) override { }
  virtual void exitDimensionDatatype(MySqlParser::DimensionDatatypeContext * /*ctx*/) override { }

  virtual void enterSimpleDatatype(MySqlParser::SimpleDatatypeContext * /*ctx*/) override { }
  virtual void exitSimpleDatatype(MySqlParser::SimpleDatatypeContext * /*ctx*/) override { }

  virtual void enterCollectCharDatatype(MySqlParser::CollectCharDatatypeContext * /*ctx*/) override { }
  virtual void exitCollectCharDatatype(MySqlParser::CollectCharDatatypeContext * /*ctx*/) override { }

  virtual void enterSpatialDatatype(MySqlParser::SpatialDatatypeContext * /*ctx*/) override { }
  virtual void exitSpatialDatatype(MySqlParser::SpatialDatatypeContext * /*ctx*/) override { }

  virtual void enterData_type_to_convert(MySqlParser::Data_type_to_convertContext * /*ctx*/) override { }
  virtual void exitData_type_to_convert(MySqlParser::Data_type_to_convertContext * /*ctx*/) override { }

  virtual void enterSpatial_data_type(MySqlParser::Spatial_data_typeContext * /*ctx*/) override { }
  virtual void exitSpatial_data_type(MySqlParser::Spatial_data_typeContext * /*ctx*/) override { }

  virtual void enterLength_one_dimension(MySqlParser::Length_one_dimensionContext * /*ctx*/) override { }
  virtual void exitLength_one_dimension(MySqlParser::Length_one_dimensionContext * /*ctx*/) override { }

  virtual void enterLength_two_dimension(MySqlParser::Length_two_dimensionContext * /*ctx*/) override { }
  virtual void exitLength_two_dimension(MySqlParser::Length_two_dimensionContext * /*ctx*/) override { }

  virtual void enterLength_two_optional_dimension(MySqlParser::Length_two_optional_dimensionContext * /*ctx*/) override { }
  virtual void exitLength_two_optional_dimension(MySqlParser::Length_two_optional_dimensionContext * /*ctx*/) override { }

  virtual void enterId_list(MySqlParser::Id_listContext * /*ctx*/) override { }
  virtual void exitId_list(MySqlParser::Id_listContext * /*ctx*/) override { }

  virtual void enterTable_list(MySqlParser::Table_listContext * /*ctx*/) override { }
  virtual void exitTable_list(MySqlParser::Table_listContext * /*ctx*/) override { }

  virtual void enterTable_pair_list(MySqlParser::Table_pair_listContext * /*ctx*/) override { }
  virtual void exitTable_pair_list(MySqlParser::Table_pair_listContext * /*ctx*/) override { }

  virtual void enterIndex_colname_list(MySqlParser::Index_colname_listContext * /*ctx*/) override { }
  virtual void exitIndex_colname_list(MySqlParser::Index_colname_listContext * /*ctx*/) override { }

  virtual void enterExpression_list(MySqlParser::Expression_listContext * /*ctx*/) override { }
  virtual void exitExpression_list(MySqlParser::Expression_listContext * /*ctx*/) override { }

  virtual void enterConstant_list(MySqlParser::Constant_listContext * /*ctx*/) override { }
  virtual void exitConstant_list(MySqlParser::Constant_listContext * /*ctx*/) override { }

  virtual void enterSimple_string_list(MySqlParser::Simple_string_listContext * /*ctx*/) override { }
  virtual void exitSimple_string_list(MySqlParser::Simple_string_listContext * /*ctx*/) override { }

  virtual void enterUser_var_list(MySqlParser::User_var_listContext * /*ctx*/) override { }
  virtual void exitUser_var_list(MySqlParser::User_var_listContext * /*ctx*/) override { }

  virtual void enterDefault_value(MySqlParser::Default_valueContext * /*ctx*/) override { }
  virtual void exitDefault_value(MySqlParser::Default_valueContext * /*ctx*/) override { }

  virtual void enterIf_exists(MySqlParser::If_existsContext * /*ctx*/) override { }
  virtual void exitIf_exists(MySqlParser::If_existsContext * /*ctx*/) override { }

  virtual void enterIf_not_exists(MySqlParser::If_not_existsContext * /*ctx*/) override { }
  virtual void exitIf_not_exists(MySqlParser::If_not_existsContext * /*ctx*/) override { }

  virtual void enterSpecificFunctionCall(MySqlParser::SpecificFunctionCallContext * /*ctx*/) override { }
  virtual void exitSpecificFunctionCall(MySqlParser::SpecificFunctionCallContext * /*ctx*/) override { }

  virtual void enterAggregateFunctionCall(MySqlParser::AggregateFunctionCallContext * /*ctx*/) override { }
  virtual void exitAggregateFunctionCall(MySqlParser::AggregateFunctionCallContext * /*ctx*/) override { }

  virtual void enterScalarFunctionCall(MySqlParser::ScalarFunctionCallContext * /*ctx*/) override { }
  virtual void exitScalarFunctionCall(MySqlParser::ScalarFunctionCallContext * /*ctx*/) override { }

  virtual void enterUdfFunctionCall(MySqlParser::UdfFunctionCallContext * /*ctx*/) override { }
  virtual void exitUdfFunctionCall(MySqlParser::UdfFunctionCallContext * /*ctx*/) override { }

  virtual void enterSimpleSpecificFCall(MySqlParser::SimpleSpecificFCallContext * /*ctx*/) override { }
  virtual void exitSimpleSpecificFCall(MySqlParser::SimpleSpecificFCallContext * /*ctx*/) override { }

  virtual void enterConvertDataTypeFCall(MySqlParser::ConvertDataTypeFCallContext * /*ctx*/) override { }
  virtual void exitConvertDataTypeFCall(MySqlParser::ConvertDataTypeFCallContext * /*ctx*/) override { }

  virtual void enterValuesFCall(MySqlParser::ValuesFCallContext * /*ctx*/) override { }
  virtual void exitValuesFCall(MySqlParser::ValuesFCallContext * /*ctx*/) override { }

  virtual void enterCaseFCall(MySqlParser::CaseFCallContext * /*ctx*/) override { }
  virtual void exitCaseFCall(MySqlParser::CaseFCallContext * /*ctx*/) override { }

  virtual void enterCharFCall(MySqlParser::CharFCallContext * /*ctx*/) override { }
  virtual void exitCharFCall(MySqlParser::CharFCallContext * /*ctx*/) override { }

  virtual void enterPositionFCall(MySqlParser::PositionFCallContext * /*ctx*/) override { }
  virtual void exitPositionFCall(MySqlParser::PositionFCallContext * /*ctx*/) override { }

  virtual void enterSubstrFCall(MySqlParser::SubstrFCallContext * /*ctx*/) override { }
  virtual void exitSubstrFCall(MySqlParser::SubstrFCallContext * /*ctx*/) override { }

  virtual void enterTrimFCall(MySqlParser::TrimFCallContext * /*ctx*/) override { }
  virtual void exitTrimFCall(MySqlParser::TrimFCallContext * /*ctx*/) override { }

  virtual void enterWeightFCall(MySqlParser::WeightFCallContext * /*ctx*/) override { }
  virtual void exitWeightFCall(MySqlParser::WeightFCallContext * /*ctx*/) override { }

  virtual void enterExtractFCall(MySqlParser::ExtractFCallContext * /*ctx*/) override { }
  virtual void exitExtractFCall(MySqlParser::ExtractFCallContext * /*ctx*/) override { }

  virtual void enterGetFormatFCall(MySqlParser::GetFormatFCallContext * /*ctx*/) override { }
  virtual void exitGetFormatFCall(MySqlParser::GetFormatFCallContext * /*ctx*/) override { }

  virtual void enterLevelWeightFList(MySqlParser::LevelWeightFListContext * /*ctx*/) override { }
  virtual void exitLevelWeightFList(MySqlParser::LevelWeightFListContext * /*ctx*/) override { }

  virtual void enterLevelWeightFRange(MySqlParser::LevelWeightFRangeContext * /*ctx*/) override { }
  virtual void exitLevelWeightFRange(MySqlParser::LevelWeightFRangeContext * /*ctx*/) override { }

  virtual void enterAggregate_windowed_function(MySqlParser::Aggregate_windowed_functionContext * /*ctx*/) override { }
  virtual void exitAggregate_windowed_function(MySqlParser::Aggregate_windowed_functionContext * /*ctx*/) override { }

  virtual void enterScalar_function_name(MySqlParser::Scalar_function_nameContext * /*ctx*/) override { }
  virtual void exitScalar_function_name(MySqlParser::Scalar_function_nameContext * /*ctx*/) override { }

  virtual void enterFunction_args(MySqlParser::Function_argsContext * /*ctx*/) override { }
  virtual void exitFunction_args(MySqlParser::Function_argsContext * /*ctx*/) override { }

  virtual void enterFunction_arg(MySqlParser::Function_argContext * /*ctx*/) override { }
  virtual void exitFunction_arg(MySqlParser::Function_argContext * /*ctx*/) override { }

  virtual void enterIsExpression(MySqlParser::IsExpressionContext * /*ctx*/) override { }
  virtual void exitIsExpression(MySqlParser::IsExpressionContext * /*ctx*/) override { }

  virtual void enterNotExpression(MySqlParser::NotExpressionContext * /*ctx*/) override { }
  virtual void exitNotExpression(MySqlParser::NotExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalExpression(MySqlParser::LogicalExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalExpression(MySqlParser::LogicalExpressionContext * /*ctx*/) override { }

  virtual void enterPredicateExpression(MySqlParser::PredicateExpressionContext * /*ctx*/) override { }
  virtual void exitPredicateExpression(MySqlParser::PredicateExpressionContext * /*ctx*/) override { }

  virtual void enterSoundsLikePredicate(MySqlParser::SoundsLikePredicateContext * /*ctx*/) override { }
  virtual void exitSoundsLikePredicate(MySqlParser::SoundsLikePredicateContext * /*ctx*/) override { }

  virtual void enterExpressionAtomPredicate(MySqlParser::ExpressionAtomPredicateContext * /*ctx*/) override { }
  virtual void exitExpressionAtomPredicate(MySqlParser::ExpressionAtomPredicateContext * /*ctx*/) override { }

  virtual void enterInPredicate(MySqlParser::InPredicateContext * /*ctx*/) override { }
  virtual void exitInPredicate(MySqlParser::InPredicateContext * /*ctx*/) override { }

  virtual void enterSubqueryComparasionPredicate(MySqlParser::SubqueryComparasionPredicateContext * /*ctx*/) override { }
  virtual void exitSubqueryComparasionPredicate(MySqlParser::SubqueryComparasionPredicateContext * /*ctx*/) override { }

  virtual void enterBetweenPredicate(MySqlParser::BetweenPredicateContext * /*ctx*/) override { }
  virtual void exitBetweenPredicate(MySqlParser::BetweenPredicateContext * /*ctx*/) override { }

  virtual void enterBinaryComparasionPredicate(MySqlParser::BinaryComparasionPredicateContext * /*ctx*/) override { }
  virtual void exitBinaryComparasionPredicate(MySqlParser::BinaryComparasionPredicateContext * /*ctx*/) override { }

  virtual void enterIsNullPredicate(MySqlParser::IsNullPredicateContext * /*ctx*/) override { }
  virtual void exitIsNullPredicate(MySqlParser::IsNullPredicateContext * /*ctx*/) override { }

  virtual void enterLikePredicate(MySqlParser::LikePredicateContext * /*ctx*/) override { }
  virtual void exitLikePredicate(MySqlParser::LikePredicateContext * /*ctx*/) override { }

  virtual void enterRegexpPredicate(MySqlParser::RegexpPredicateContext * /*ctx*/) override { }
  virtual void exitRegexpPredicate(MySqlParser::RegexpPredicateContext * /*ctx*/) override { }

  virtual void enterUnaryExpressionAtom(MySqlParser::UnaryExpressionAtomContext * /*ctx*/) override { }
  virtual void exitUnaryExpressionAtom(MySqlParser::UnaryExpressionAtomContext * /*ctx*/) override { }

  virtual void enterExistsExpessionAtom(MySqlParser::ExistsExpessionAtomContext * /*ctx*/) override { }
  virtual void exitExistsExpessionAtom(MySqlParser::ExistsExpessionAtomContext * /*ctx*/) override { }

  virtual void enterConstantExpressionAtom(MySqlParser::ConstantExpressionAtomContext * /*ctx*/) override { }
  virtual void exitConstantExpressionAtom(MySqlParser::ConstantExpressionAtomContext * /*ctx*/) override { }

  virtual void enterFunctionCallExpressionAtom(MySqlParser::FunctionCallExpressionAtomContext * /*ctx*/) override { }
  virtual void exitFunctionCallExpressionAtom(MySqlParser::FunctionCallExpressionAtomContext * /*ctx*/) override { }

  virtual void enterMysqlVariableExpressionAtom(MySqlParser::MysqlVariableExpressionAtomContext * /*ctx*/) override { }
  virtual void exitMysqlVariableExpressionAtom(MySqlParser::MysqlVariableExpressionAtomContext * /*ctx*/) override { }

  virtual void enterBinaryExpressionAtom(MySqlParser::BinaryExpressionAtomContext * /*ctx*/) override { }
  virtual void exitBinaryExpressionAtom(MySqlParser::BinaryExpressionAtomContext * /*ctx*/) override { }

  virtual void enterFullColumnNameExpressionAtom(MySqlParser::FullColumnNameExpressionAtomContext * /*ctx*/) override { }
  virtual void exitFullColumnNameExpressionAtom(MySqlParser::FullColumnNameExpressionAtomContext * /*ctx*/) override { }

  virtual void enterDefaultExpressionAtom(MySqlParser::DefaultExpressionAtomContext * /*ctx*/) override { }
  virtual void exitDefaultExpressionAtom(MySqlParser::DefaultExpressionAtomContext * /*ctx*/) override { }

  virtual void enterBitExpressionAtom(MySqlParser::BitExpressionAtomContext * /*ctx*/) override { }
  virtual void exitBitExpressionAtom(MySqlParser::BitExpressionAtomContext * /*ctx*/) override { }

  virtual void enterNestedExpressionAtom(MySqlParser::NestedExpressionAtomContext * /*ctx*/) override { }
  virtual void exitNestedExpressionAtom(MySqlParser::NestedExpressionAtomContext * /*ctx*/) override { }

  virtual void enterMathExpressionAtom(MySqlParser::MathExpressionAtomContext * /*ctx*/) override { }
  virtual void exitMathExpressionAtom(MySqlParser::MathExpressionAtomContext * /*ctx*/) override { }

  virtual void enterIntervalExpressionAtom(MySqlParser::IntervalExpressionAtomContext * /*ctx*/) override { }
  virtual void exitIntervalExpressionAtom(MySqlParser::IntervalExpressionAtomContext * /*ctx*/) override { }

  virtual void enterUnary_operator(MySqlParser::Unary_operatorContext * /*ctx*/) override { }
  virtual void exitUnary_operator(MySqlParser::Unary_operatorContext * /*ctx*/) override { }

  virtual void enterComparison_operator(MySqlParser::Comparison_operatorContext * /*ctx*/) override { }
  virtual void exitComparison_operator(MySqlParser::Comparison_operatorContext * /*ctx*/) override { }

  virtual void enterLogical_operator(MySqlParser::Logical_operatorContext * /*ctx*/) override { }
  virtual void exitLogical_operator(MySqlParser::Logical_operatorContext * /*ctx*/) override { }

  virtual void enterBit_operator(MySqlParser::Bit_operatorContext * /*ctx*/) override { }
  virtual void exitBit_operator(MySqlParser::Bit_operatorContext * /*ctx*/) override { }

  virtual void enterMath_operator(MySqlParser::Math_operatorContext * /*ctx*/) override { }
  virtual void exitMath_operator(MySqlParser::Math_operatorContext * /*ctx*/) override { }

  virtual void enterCharset_name_base(MySqlParser::Charset_name_baseContext * /*ctx*/) override { }
  virtual void exitCharset_name_base(MySqlParser::Charset_name_baseContext * /*ctx*/) override { }

  virtual void enterTransaction_level_base(MySqlParser::Transaction_level_baseContext * /*ctx*/) override { }
  virtual void exitTransaction_level_base(MySqlParser::Transaction_level_baseContext * /*ctx*/) override { }

  virtual void enterPrivileges_base(MySqlParser::Privileges_baseContext * /*ctx*/) override { }
  virtual void exitPrivileges_base(MySqlParser::Privileges_baseContext * /*ctx*/) override { }

  virtual void enterInterval_type_base(MySqlParser::Interval_type_baseContext * /*ctx*/) override { }
  virtual void exitInterval_type_base(MySqlParser::Interval_type_baseContext * /*ctx*/) override { }

  virtual void enterData_type_base(MySqlParser::Data_type_baseContext * /*ctx*/) override { }
  virtual void exitData_type_base(MySqlParser::Data_type_baseContext * /*ctx*/) override { }

  virtual void enterKeywords_can_be_id(MySqlParser::Keywords_can_be_idContext * /*ctx*/) override { }
  virtual void exitKeywords_can_be_id(MySqlParser::Keywords_can_be_idContext * /*ctx*/) override { }

  virtual void enterFunction_name_base(MySqlParser::Function_name_baseContext * /*ctx*/) override { }
  virtual void exitFunction_name_base(MySqlParser::Function_name_baseContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace parser

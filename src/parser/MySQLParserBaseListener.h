
// Generated from MySQLParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MySQLParserListener.h"


namespace parser {

/**
 * This class provides an empty implementation of MySQLParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MySQLParserBaseListener : public MySQLParserListener {
public:

  virtual void enterRoot(MySQLParser::RootContext * /*ctx*/) override { }
  virtual void exitRoot(MySQLParser::RootContext * /*ctx*/) override { }

  virtual void enterSql_statements(MySQLParser::Sql_statementsContext * /*ctx*/) override { }
  virtual void exitSql_statements(MySQLParser::Sql_statementsContext * /*ctx*/) override { }

  virtual void enterSql_statement(MySQLParser::Sql_statementContext * /*ctx*/) override { }
  virtual void exitSql_statement(MySQLParser::Sql_statementContext * /*ctx*/) override { }

  virtual void enterEmpty_statement(MySQLParser::Empty_statementContext * /*ctx*/) override { }
  virtual void exitEmpty_statement(MySQLParser::Empty_statementContext * /*ctx*/) override { }

  virtual void enterDdl_statement(MySQLParser::Ddl_statementContext * /*ctx*/) override { }
  virtual void exitDdl_statement(MySQLParser::Ddl_statementContext * /*ctx*/) override { }

  virtual void enterDml_statement(MySQLParser::Dml_statementContext * /*ctx*/) override { }
  virtual void exitDml_statement(MySQLParser::Dml_statementContext * /*ctx*/) override { }

  virtual void enterTransaction_statement(MySQLParser::Transaction_statementContext * /*ctx*/) override { }
  virtual void exitTransaction_statement(MySQLParser::Transaction_statementContext * /*ctx*/) override { }

  virtual void enterReplication_statement(MySQLParser::Replication_statementContext * /*ctx*/) override { }
  virtual void exitReplication_statement(MySQLParser::Replication_statementContext * /*ctx*/) override { }

  virtual void enterPrepared_statement(MySQLParser::Prepared_statementContext * /*ctx*/) override { }
  virtual void exitPrepared_statement(MySQLParser::Prepared_statementContext * /*ctx*/) override { }

  virtual void enterCompound_statement(MySQLParser::Compound_statementContext * /*ctx*/) override { }
  virtual void exitCompound_statement(MySQLParser::Compound_statementContext * /*ctx*/) override { }

  virtual void enterAdministration_statement(MySQLParser::Administration_statementContext * /*ctx*/) override { }
  virtual void exitAdministration_statement(MySQLParser::Administration_statementContext * /*ctx*/) override { }

  virtual void enterUtility_statement(MySQLParser::Utility_statementContext * /*ctx*/) override { }
  virtual void exitUtility_statement(MySQLParser::Utility_statementContext * /*ctx*/) override { }

  virtual void enterCreate_database(MySQLParser::Create_databaseContext * /*ctx*/) override { }
  virtual void exitCreate_database(MySQLParser::Create_databaseContext * /*ctx*/) override { }

  virtual void enterCreate_event(MySQLParser::Create_eventContext * /*ctx*/) override { }
  virtual void exitCreate_event(MySQLParser::Create_eventContext * /*ctx*/) override { }

  virtual void enterCreate_index(MySQLParser::Create_indexContext * /*ctx*/) override { }
  virtual void exitCreate_index(MySQLParser::Create_indexContext * /*ctx*/) override { }

  virtual void enterCreate_logfile_group(MySQLParser::Create_logfile_groupContext * /*ctx*/) override { }
  virtual void exitCreate_logfile_group(MySQLParser::Create_logfile_groupContext * /*ctx*/) override { }

  virtual void enterCreate_procedure(MySQLParser::Create_procedureContext * /*ctx*/) override { }
  virtual void exitCreate_procedure(MySQLParser::Create_procedureContext * /*ctx*/) override { }

  virtual void enterCreate_function(MySQLParser::Create_functionContext * /*ctx*/) override { }
  virtual void exitCreate_function(MySQLParser::Create_functionContext * /*ctx*/) override { }

  virtual void enterCreate_server(MySQLParser::Create_serverContext * /*ctx*/) override { }
  virtual void exitCreate_server(MySQLParser::Create_serverContext * /*ctx*/) override { }

  virtual void enterCopyCreateTable(MySQLParser::CopyCreateTableContext * /*ctx*/) override { }
  virtual void exitCopyCreateTable(MySQLParser::CopyCreateTableContext * /*ctx*/) override { }

  virtual void enterQueryCreateTable(MySQLParser::QueryCreateTableContext * /*ctx*/) override { }
  virtual void exitQueryCreateTable(MySQLParser::QueryCreateTableContext * /*ctx*/) override { }

  virtual void enterColCreateTable(MySQLParser::ColCreateTableContext * /*ctx*/) override { }
  virtual void exitColCreateTable(MySQLParser::ColCreateTableContext * /*ctx*/) override { }

  virtual void enterCreate_tablespace_innodb(MySQLParser::Create_tablespace_innodbContext * /*ctx*/) override { }
  virtual void exitCreate_tablespace_innodb(MySQLParser::Create_tablespace_innodbContext * /*ctx*/) override { }

  virtual void enterCreate_tablespace_ndb(MySQLParser::Create_tablespace_ndbContext * /*ctx*/) override { }
  virtual void exitCreate_tablespace_ndb(MySQLParser::Create_tablespace_ndbContext * /*ctx*/) override { }

  virtual void enterCreate_trigger(MySQLParser::Create_triggerContext * /*ctx*/) override { }
  virtual void exitCreate_trigger(MySQLParser::Create_triggerContext * /*ctx*/) override { }

  virtual void enterCreate_view(MySQLParser::Create_viewContext * /*ctx*/) override { }
  virtual void exitCreate_view(MySQLParser::Create_viewContext * /*ctx*/) override { }

  virtual void enterCreate_database_option(MySQLParser::Create_database_optionContext * /*ctx*/) override { }
  virtual void exitCreate_database_option(MySQLParser::Create_database_optionContext * /*ctx*/) override { }

  virtual void enterOwner_statement(MySQLParser::Owner_statementContext * /*ctx*/) override { }
  virtual void exitOwner_statement(MySQLParser::Owner_statementContext * /*ctx*/) override { }

  virtual void enterPreciseSchedule(MySQLParser::PreciseScheduleContext * /*ctx*/) override { }
  virtual void exitPreciseSchedule(MySQLParser::PreciseScheduleContext * /*ctx*/) override { }

  virtual void enterIntervalSchedule(MySQLParser::IntervalScheduleContext * /*ctx*/) override { }
  virtual void exitIntervalSchedule(MySQLParser::IntervalScheduleContext * /*ctx*/) override { }

  virtual void enterTimestamp_value(MySQLParser::Timestamp_valueContext * /*ctx*/) override { }
  virtual void exitTimestamp_value(MySQLParser::Timestamp_valueContext * /*ctx*/) override { }

  virtual void enterInterval_expr(MySQLParser::Interval_exprContext * /*ctx*/) override { }
  virtual void exitInterval_expr(MySQLParser::Interval_exprContext * /*ctx*/) override { }

  virtual void enterInterval_type(MySQLParser::Interval_typeContext * /*ctx*/) override { }
  virtual void exitInterval_type(MySQLParser::Interval_typeContext * /*ctx*/) override { }

  virtual void enterIndex_type(MySQLParser::Index_typeContext * /*ctx*/) override { }
  virtual void exitIndex_type(MySQLParser::Index_typeContext * /*ctx*/) override { }

  virtual void enterIndex_option(MySQLParser::Index_optionContext * /*ctx*/) override { }
  virtual void exitIndex_option(MySQLParser::Index_optionContext * /*ctx*/) override { }

  virtual void enterProc_param(MySQLParser::Proc_paramContext * /*ctx*/) override { }
  virtual void exitProc_param(MySQLParser::Proc_paramContext * /*ctx*/) override { }

  virtual void enterFunc_param(MySQLParser::Func_paramContext * /*ctx*/) override { }
  virtual void exitFunc_param(MySQLParser::Func_paramContext * /*ctx*/) override { }

  virtual void enterRcComment(MySQLParser::RcCommentContext * /*ctx*/) override { }
  virtual void exitRcComment(MySQLParser::RcCommentContext * /*ctx*/) override { }

  virtual void enterRcSqllang(MySQLParser::RcSqllangContext * /*ctx*/) override { }
  virtual void exitRcSqllang(MySQLParser::RcSqllangContext * /*ctx*/) override { }

  virtual void enterRcDeterm(MySQLParser::RcDetermContext * /*ctx*/) override { }
  virtual void exitRcDeterm(MySQLParser::RcDetermContext * /*ctx*/) override { }

  virtual void enterRcSqldata(MySQLParser::RcSqldataContext * /*ctx*/) override { }
  virtual void exitRcSqldata(MySQLParser::RcSqldataContext * /*ctx*/) override { }

  virtual void enterRcSecurestmt(MySQLParser::RcSecurestmtContext * /*ctx*/) override { }
  virtual void exitRcSecurestmt(MySQLParser::RcSecurestmtContext * /*ctx*/) override { }

  virtual void enterServer_option(MySQLParser::Server_optionContext * /*ctx*/) override { }
  virtual void exitServer_option(MySQLParser::Server_optionContext * /*ctx*/) override { }

  virtual void enterColumn_def_table_constraints(MySQLParser::Column_def_table_constraintsContext * /*ctx*/) override { }
  virtual void exitColumn_def_table_constraints(MySQLParser::Column_def_table_constraintsContext * /*ctx*/) override { }

  virtual void enterColumnDefinition(MySQLParser::ColumnDefinitionContext * /*ctx*/) override { }
  virtual void exitColumnDefinition(MySQLParser::ColumnDefinitionContext * /*ctx*/) override { }

  virtual void enterConstraintDefinition(MySQLParser::ConstraintDefinitionContext * /*ctx*/) override { }
  virtual void exitConstraintDefinition(MySQLParser::ConstraintDefinitionContext * /*ctx*/) override { }

  virtual void enterIndexDefinition(MySQLParser::IndexDefinitionContext * /*ctx*/) override { }
  virtual void exitIndexDefinition(MySQLParser::IndexDefinitionContext * /*ctx*/) override { }

  virtual void enterColumn_definition(MySQLParser::Column_definitionContext * /*ctx*/) override { }
  virtual void exitColumn_definition(MySQLParser::Column_definitionContext * /*ctx*/) override { }

  virtual void enterColConstrNull(MySQLParser::ColConstrNullContext * /*ctx*/) override { }
  virtual void exitColConstrNull(MySQLParser::ColConstrNullContext * /*ctx*/) override { }

  virtual void enterColConstrDflt(MySQLParser::ColConstrDfltContext * /*ctx*/) override { }
  virtual void exitColConstrDflt(MySQLParser::ColConstrDfltContext * /*ctx*/) override { }

  virtual void enterColConstrAuInc(MySQLParser::ColConstrAuIncContext * /*ctx*/) override { }
  virtual void exitColConstrAuInc(MySQLParser::ColConstrAuIncContext * /*ctx*/) override { }

  virtual void enterColConstrPK(MySQLParser::ColConstrPKContext * /*ctx*/) override { }
  virtual void exitColConstrPK(MySQLParser::ColConstrPKContext * /*ctx*/) override { }

  virtual void enterColConstrUK(MySQLParser::ColConstrUKContext * /*ctx*/) override { }
  virtual void exitColConstrUK(MySQLParser::ColConstrUKContext * /*ctx*/) override { }

  virtual void enterColConstrComment(MySQLParser::ColConstrCommentContext * /*ctx*/) override { }
  virtual void exitColConstrComment(MySQLParser::ColConstrCommentContext * /*ctx*/) override { }

  virtual void enterColConstrForm(MySQLParser::ColConstrFormContext * /*ctx*/) override { }
  virtual void exitColConstrForm(MySQLParser::ColConstrFormContext * /*ctx*/) override { }

  virtual void enterColConstrStorage(MySQLParser::ColConstrStorageContext * /*ctx*/) override { }
  virtual void exitColConstrStorage(MySQLParser::ColConstrStorageContext * /*ctx*/) override { }

  virtual void enterColConstrRefdef(MySQLParser::ColConstrRefdefContext * /*ctx*/) override { }
  virtual void exitColConstrRefdef(MySQLParser::ColConstrRefdefContext * /*ctx*/) override { }

  virtual void enterTblConstrPK(MySQLParser::TblConstrPKContext * /*ctx*/) override { }
  virtual void exitTblConstrPK(MySQLParser::TblConstrPKContext * /*ctx*/) override { }

  virtual void enterTblConstrUK(MySQLParser::TblConstrUKContext * /*ctx*/) override { }
  virtual void exitTblConstrUK(MySQLParser::TblConstrUKContext * /*ctx*/) override { }

  virtual void enterTblConstrFK(MySQLParser::TblConstrFKContext * /*ctx*/) override { }
  virtual void exitTblConstrFK(MySQLParser::TblConstrFKContext * /*ctx*/) override { }

  virtual void enterTblConstCheck(MySQLParser::TblConstCheckContext * /*ctx*/) override { }
  virtual void exitTblConstCheck(MySQLParser::TblConstCheckContext * /*ctx*/) override { }

  virtual void enterReference_definition(MySQLParser::Reference_definitionContext * /*ctx*/) override { }
  virtual void exitReference_definition(MySQLParser::Reference_definitionContext * /*ctx*/) override { }

  virtual void enterOn_delete_action(MySQLParser::On_delete_actionContext * /*ctx*/) override { }
  virtual void exitOn_delete_action(MySQLParser::On_delete_actionContext * /*ctx*/) override { }

  virtual void enterOn_update_action(MySQLParser::On_update_actionContext * /*ctx*/) override { }
  virtual void exitOn_update_action(MySQLParser::On_update_actionContext * /*ctx*/) override { }

  virtual void enterReference_action_control_type(MySQLParser::Reference_action_control_typeContext * /*ctx*/) override { }
  virtual void exitReference_action_control_type(MySQLParser::Reference_action_control_typeContext * /*ctx*/) override { }

  virtual void enterSimpleIndex(MySQLParser::SimpleIndexContext * /*ctx*/) override { }
  virtual void exitSimpleIndex(MySQLParser::SimpleIndexContext * /*ctx*/) override { }

  virtual void enterSpecIndex(MySQLParser::SpecIndexContext * /*ctx*/) override { }
  virtual void exitSpecIndex(MySQLParser::SpecIndexContext * /*ctx*/) override { }

  virtual void enterTblOptEngine(MySQLParser::TblOptEngineContext * /*ctx*/) override { }
  virtual void exitTblOptEngine(MySQLParser::TblOptEngineContext * /*ctx*/) override { }

  virtual void enterTblOptAuInc(MySQLParser::TblOptAuIncContext * /*ctx*/) override { }
  virtual void exitTblOptAuInc(MySQLParser::TblOptAuIncContext * /*ctx*/) override { }

  virtual void enterTblOptAvgRLen(MySQLParser::TblOptAvgRLenContext * /*ctx*/) override { }
  virtual void exitTblOptAvgRLen(MySQLParser::TblOptAvgRLenContext * /*ctx*/) override { }

  virtual void enterTblOptDefCharSet(MySQLParser::TblOptDefCharSetContext * /*ctx*/) override { }
  virtual void exitTblOptDefCharSet(MySQLParser::TblOptDefCharSetContext * /*ctx*/) override { }

  virtual void enterTblOptChkSum(MySQLParser::TblOptChkSumContext * /*ctx*/) override { }
  virtual void exitTblOptChkSum(MySQLParser::TblOptChkSumContext * /*ctx*/) override { }

  virtual void enterTblOptDefCollate(MySQLParser::TblOptDefCollateContext * /*ctx*/) override { }
  virtual void exitTblOptDefCollate(MySQLParser::TblOptDefCollateContext * /*ctx*/) override { }

  virtual void enterTblOptComment(MySQLParser::TblOptCommentContext * /*ctx*/) override { }
  virtual void exitTblOptComment(MySQLParser::TblOptCommentContext * /*ctx*/) override { }

  virtual void enterTblOptCompr(MySQLParser::TblOptComprContext * /*ctx*/) override { }
  virtual void exitTblOptCompr(MySQLParser::TblOptComprContext * /*ctx*/) override { }

  virtual void enterTblOptConn(MySQLParser::TblOptConnContext * /*ctx*/) override { }
  virtual void exitTblOptConn(MySQLParser::TblOptConnContext * /*ctx*/) override { }

  virtual void enterTblOptDataDir(MySQLParser::TblOptDataDirContext * /*ctx*/) override { }
  virtual void exitTblOptDataDir(MySQLParser::TblOptDataDirContext * /*ctx*/) override { }

  virtual void enterTblOptDelKW(MySQLParser::TblOptDelKWContext * /*ctx*/) override { }
  virtual void exitTblOptDelKW(MySQLParser::TblOptDelKWContext * /*ctx*/) override { }

  virtual void enterTblOptEncr(MySQLParser::TblOptEncrContext * /*ctx*/) override { }
  virtual void exitTblOptEncr(MySQLParser::TblOptEncrContext * /*ctx*/) override { }

  virtual void enterTblOptIndexDir(MySQLParser::TblOptIndexDirContext * /*ctx*/) override { }
  virtual void exitTblOptIndexDir(MySQLParser::TblOptIndexDirContext * /*ctx*/) override { }

  virtual void enterTblOptInsMeth(MySQLParser::TblOptInsMethContext * /*ctx*/) override { }
  virtual void exitTblOptInsMeth(MySQLParser::TblOptInsMethContext * /*ctx*/) override { }

  virtual void enterTblOptKeyBlockSz(MySQLParser::TblOptKeyBlockSzContext * /*ctx*/) override { }
  virtual void exitTblOptKeyBlockSz(MySQLParser::TblOptKeyBlockSzContext * /*ctx*/) override { }

  virtual void enterTblOptMaxRows(MySQLParser::TblOptMaxRowsContext * /*ctx*/) override { }
  virtual void exitTblOptMaxRows(MySQLParser::TblOptMaxRowsContext * /*ctx*/) override { }

  virtual void enterTblOptMinRows(MySQLParser::TblOptMinRowsContext * /*ctx*/) override { }
  virtual void exitTblOptMinRows(MySQLParser::TblOptMinRowsContext * /*ctx*/) override { }

  virtual void enterTblOptPackK(MySQLParser::TblOptPackKContext * /*ctx*/) override { }
  virtual void exitTblOptPackK(MySQLParser::TblOptPackKContext * /*ctx*/) override { }

  virtual void enterTblOptPasswd(MySQLParser::TblOptPasswdContext * /*ctx*/) override { }
  virtual void exitTblOptPasswd(MySQLParser::TblOptPasswdContext * /*ctx*/) override { }

  virtual void enterTblOptRowFormat(MySQLParser::TblOptRowFormatContext * /*ctx*/) override { }
  virtual void exitTblOptRowFormat(MySQLParser::TblOptRowFormatContext * /*ctx*/) override { }

  virtual void enterTblOptStatAutoR(MySQLParser::TblOptStatAutoRContext * /*ctx*/) override { }
  virtual void exitTblOptStatAutoR(MySQLParser::TblOptStatAutoRContext * /*ctx*/) override { }

  virtual void enterTblOptStatPersist(MySQLParser::TblOptStatPersistContext * /*ctx*/) override { }
  virtual void exitTblOptStatPersist(MySQLParser::TblOptStatPersistContext * /*ctx*/) override { }

  virtual void enterTblOptStatSamplPg(MySQLParser::TblOptStatSamplPgContext * /*ctx*/) override { }
  virtual void exitTblOptStatSamplPg(MySQLParser::TblOptStatSamplPgContext * /*ctx*/) override { }

  virtual void enterTblOptTablespace(MySQLParser::TblOptTablespaceContext * /*ctx*/) override { }
  virtual void exitTblOptTablespace(MySQLParser::TblOptTablespaceContext * /*ctx*/) override { }

  virtual void enterTblOptUnion(MySQLParser::TblOptUnionContext * /*ctx*/) override { }
  virtual void exitTblOptUnion(MySQLParser::TblOptUnionContext * /*ctx*/) override { }

  virtual void enterPartition_options(MySQLParser::Partition_optionsContext * /*ctx*/) override { }
  virtual void exitPartition_options(MySQLParser::Partition_optionsContext * /*ctx*/) override { }

  virtual void enterPartition_function_definition(MySQLParser::Partition_function_definitionContext * /*ctx*/) override { }
  virtual void exitPartition_function_definition(MySQLParser::Partition_function_definitionContext * /*ctx*/) override { }

  virtual void enterLinear_partition_func_def(MySQLParser::Linear_partition_func_defContext * /*ctx*/) override { }
  virtual void exitLinear_partition_func_def(MySQLParser::Linear_partition_func_defContext * /*ctx*/) override { }

  virtual void enterPartition_def(MySQLParser::Partition_defContext * /*ctx*/) override { }
  virtual void exitPartition_def(MySQLParser::Partition_defContext * /*ctx*/) override { }

  virtual void enterSubpartition_def(MySQLParser::Subpartition_defContext * /*ctx*/) override { }
  virtual void exitSubpartition_def(MySQLParser::Subpartition_defContext * /*ctx*/) override { }

  virtual void enterAlterDb(MySQLParser::AlterDbContext * /*ctx*/) override { }
  virtual void exitAlterDb(MySQLParser::AlterDbContext * /*ctx*/) override { }

  virtual void enterAlterDbUpgradeName(MySQLParser::AlterDbUpgradeNameContext * /*ctx*/) override { }
  virtual void exitAlterDbUpgradeName(MySQLParser::AlterDbUpgradeNameContext * /*ctx*/) override { }

  virtual void enterAlter_event(MySQLParser::Alter_eventContext * /*ctx*/) override { }
  virtual void exitAlter_event(MySQLParser::Alter_eventContext * /*ctx*/) override { }

  virtual void enterAlter_function(MySQLParser::Alter_functionContext * /*ctx*/) override { }
  virtual void exitAlter_function(MySQLParser::Alter_functionContext * /*ctx*/) override { }

  virtual void enterAlter_instance(MySQLParser::Alter_instanceContext * /*ctx*/) override { }
  virtual void exitAlter_instance(MySQLParser::Alter_instanceContext * /*ctx*/) override { }

  virtual void enterAlter_logfile_group(MySQLParser::Alter_logfile_groupContext * /*ctx*/) override { }
  virtual void exitAlter_logfile_group(MySQLParser::Alter_logfile_groupContext * /*ctx*/) override { }

  virtual void enterAlter_procedure(MySQLParser::Alter_procedureContext * /*ctx*/) override { }
  virtual void exitAlter_procedure(MySQLParser::Alter_procedureContext * /*ctx*/) override { }

  virtual void enterAlter_server(MySQLParser::Alter_serverContext * /*ctx*/) override { }
  virtual void exitAlter_server(MySQLParser::Alter_serverContext * /*ctx*/) override { }

  virtual void enterAlter_table(MySQLParser::Alter_tableContext * /*ctx*/) override { }
  virtual void exitAlter_table(MySQLParser::Alter_tableContext * /*ctx*/) override { }

  virtual void enterAlter_tablespace(MySQLParser::Alter_tablespaceContext * /*ctx*/) override { }
  virtual void exitAlter_tablespace(MySQLParser::Alter_tablespaceContext * /*ctx*/) override { }

  virtual void enterAlter_view(MySQLParser::Alter_viewContext * /*ctx*/) override { }
  virtual void exitAlter_view(MySQLParser::Alter_viewContext * /*ctx*/) override { }

  virtual void enterAltblTableOpt(MySQLParser::AltblTableOptContext * /*ctx*/) override { }
  virtual void exitAltblTableOpt(MySQLParser::AltblTableOptContext * /*ctx*/) override { }

  virtual void enterAltblAddCol(MySQLParser::AltblAddColContext * /*ctx*/) override { }
  virtual void exitAltblAddCol(MySQLParser::AltblAddColContext * /*ctx*/) override { }

  virtual void enterAltblAddCols(MySQLParser::AltblAddColsContext * /*ctx*/) override { }
  virtual void exitAltblAddCols(MySQLParser::AltblAddColsContext * /*ctx*/) override { }

  virtual void enterAltblAddIndex(MySQLParser::AltblAddIndexContext * /*ctx*/) override { }
  virtual void exitAltblAddIndex(MySQLParser::AltblAddIndexContext * /*ctx*/) override { }

  virtual void enterAltblAddPK(MySQLParser::AltblAddPKContext * /*ctx*/) override { }
  virtual void exitAltblAddPK(MySQLParser::AltblAddPKContext * /*ctx*/) override { }

  virtual void enterAltblAddUK(MySQLParser::AltblAddUKContext * /*ctx*/) override { }
  virtual void exitAltblAddUK(MySQLParser::AltblAddUKContext * /*ctx*/) override { }

  virtual void enterAltblAddSpecIndex(MySQLParser::AltblAddSpecIndexContext * /*ctx*/) override { }
  virtual void exitAltblAddSpecIndex(MySQLParser::AltblAddSpecIndexContext * /*ctx*/) override { }

  virtual void enterAltblAddFK(MySQLParser::AltblAddFKContext * /*ctx*/) override { }
  virtual void exitAltblAddFK(MySQLParser::AltblAddFKContext * /*ctx*/) override { }

  virtual void enterAltblAlg(MySQLParser::AltblAlgContext * /*ctx*/) override { }
  virtual void exitAltblAlg(MySQLParser::AltblAlgContext * /*ctx*/) override { }

  virtual void enterAltblColDef(MySQLParser::AltblColDefContext * /*ctx*/) override { }
  virtual void exitAltblColDef(MySQLParser::AltblColDefContext * /*ctx*/) override { }

  virtual void enterAltblColChange(MySQLParser::AltblColChangeContext * /*ctx*/) override { }
  virtual void exitAltblColChange(MySQLParser::AltblColChangeContext * /*ctx*/) override { }

  virtual void enterAltblLock(MySQLParser::AltblLockContext * /*ctx*/) override { }
  virtual void exitAltblLock(MySQLParser::AltblLockContext * /*ctx*/) override { }

  virtual void enterAltblColMod(MySQLParser::AltblColModContext * /*ctx*/) override { }
  virtual void exitAltblColMod(MySQLParser::AltblColModContext * /*ctx*/) override { }

  virtual void enterAltblColDrop(MySQLParser::AltblColDropContext * /*ctx*/) override { }
  virtual void exitAltblColDrop(MySQLParser::AltblColDropContext * /*ctx*/) override { }

  virtual void enterAltblDropPK(MySQLParser::AltblDropPKContext * /*ctx*/) override { }
  virtual void exitAltblDropPK(MySQLParser::AltblDropPKContext * /*ctx*/) override { }

  virtual void enterAltblDropIndex(MySQLParser::AltblDropIndexContext * /*ctx*/) override { }
  virtual void exitAltblDropIndex(MySQLParser::AltblDropIndexContext * /*ctx*/) override { }

  virtual void enterAltblDropFK(MySQLParser::AltblDropFKContext * /*ctx*/) override { }
  virtual void exitAltblDropFK(MySQLParser::AltblDropFKContext * /*ctx*/) override { }

  virtual void enterAltblDisKey(MySQLParser::AltblDisKeyContext * /*ctx*/) override { }
  virtual void exitAltblDisKey(MySQLParser::AltblDisKeyContext * /*ctx*/) override { }

  virtual void enterAltblEnKey(MySQLParser::AltblEnKeyContext * /*ctx*/) override { }
  virtual void exitAltblEnKey(MySQLParser::AltblEnKeyContext * /*ctx*/) override { }

  virtual void enterAltblRenameTbl(MySQLParser::AltblRenameTblContext * /*ctx*/) override { }
  virtual void exitAltblRenameTbl(MySQLParser::AltblRenameTblContext * /*ctx*/) override { }

  virtual void enterAltblResort(MySQLParser::AltblResortContext * /*ctx*/) override { }
  virtual void exitAltblResort(MySQLParser::AltblResortContext * /*ctx*/) override { }

  virtual void enterAltblConvert(MySQLParser::AltblConvertContext * /*ctx*/) override { }
  virtual void exitAltblConvert(MySQLParser::AltblConvertContext * /*ctx*/) override { }

  virtual void enterAltblDefCharset(MySQLParser::AltblDefCharsetContext * /*ctx*/) override { }
  virtual void exitAltblDefCharset(MySQLParser::AltblDefCharsetContext * /*ctx*/) override { }

  virtual void enterAltblDisTblspace(MySQLParser::AltblDisTblspaceContext * /*ctx*/) override { }
  virtual void exitAltblDisTblspace(MySQLParser::AltblDisTblspaceContext * /*ctx*/) override { }

  virtual void enterAltblImpTblSpace(MySQLParser::AltblImpTblSpaceContext * /*ctx*/) override { }
  virtual void exitAltblImpTblSpace(MySQLParser::AltblImpTblSpaceContext * /*ctx*/) override { }

  virtual void enterAltblForce(MySQLParser::AltblForceContext * /*ctx*/) override { }
  virtual void exitAltblForce(MySQLParser::AltblForceContext * /*ctx*/) override { }

  virtual void enterAltblValid(MySQLParser::AltblValidContext * /*ctx*/) override { }
  virtual void exitAltblValid(MySQLParser::AltblValidContext * /*ctx*/) override { }

  virtual void enterAltblAddPart(MySQLParser::AltblAddPartContext * /*ctx*/) override { }
  virtual void exitAltblAddPart(MySQLParser::AltblAddPartContext * /*ctx*/) override { }

  virtual void enterAltblDropPart(MySQLParser::AltblDropPartContext * /*ctx*/) override { }
  virtual void exitAltblDropPart(MySQLParser::AltblDropPartContext * /*ctx*/) override { }

  virtual void enterAltblDiscartPart(MySQLParser::AltblDiscartPartContext * /*ctx*/) override { }
  virtual void exitAltblDiscartPart(MySQLParser::AltblDiscartPartContext * /*ctx*/) override { }

  virtual void enterAltblImportPart(MySQLParser::AltblImportPartContext * /*ctx*/) override { }
  virtual void exitAltblImportPart(MySQLParser::AltblImportPartContext * /*ctx*/) override { }

  virtual void enterAltblTruncPart(MySQLParser::AltblTruncPartContext * /*ctx*/) override { }
  virtual void exitAltblTruncPart(MySQLParser::AltblTruncPartContext * /*ctx*/) override { }

  virtual void enterAltblCoalPart(MySQLParser::AltblCoalPartContext * /*ctx*/) override { }
  virtual void exitAltblCoalPart(MySQLParser::AltblCoalPartContext * /*ctx*/) override { }

  virtual void enterAltblReorgPart(MySQLParser::AltblReorgPartContext * /*ctx*/) override { }
  virtual void exitAltblReorgPart(MySQLParser::AltblReorgPartContext * /*ctx*/) override { }

  virtual void enterAltblExchPart(MySQLParser::AltblExchPartContext * /*ctx*/) override { }
  virtual void exitAltblExchPart(MySQLParser::AltblExchPartContext * /*ctx*/) override { }

  virtual void enterAltblAnalPart(MySQLParser::AltblAnalPartContext * /*ctx*/) override { }
  virtual void exitAltblAnalPart(MySQLParser::AltblAnalPartContext * /*ctx*/) override { }

  virtual void enterAltblCheckPart(MySQLParser::AltblCheckPartContext * /*ctx*/) override { }
  virtual void exitAltblCheckPart(MySQLParser::AltblCheckPartContext * /*ctx*/) override { }

  virtual void enterAltblOptimPart(MySQLParser::AltblOptimPartContext * /*ctx*/) override { }
  virtual void exitAltblOptimPart(MySQLParser::AltblOptimPartContext * /*ctx*/) override { }

  virtual void enterAltblRebuildPart(MySQLParser::AltblRebuildPartContext * /*ctx*/) override { }
  virtual void exitAltblRebuildPart(MySQLParser::AltblRebuildPartContext * /*ctx*/) override { }

  virtual void enterAltblRepairPart(MySQLParser::AltblRepairPartContext * /*ctx*/) override { }
  virtual void exitAltblRepairPart(MySQLParser::AltblRepairPartContext * /*ctx*/) override { }

  virtual void enterAltblRemovePart(MySQLParser::AltblRemovePartContext * /*ctx*/) override { }
  virtual void exitAltblRemovePart(MySQLParser::AltblRemovePartContext * /*ctx*/) override { }

  virtual void enterAltblUpgrPart(MySQLParser::AltblUpgrPartContext * /*ctx*/) override { }
  virtual void exitAltblUpgrPart(MySQLParser::AltblUpgrPartContext * /*ctx*/) override { }

  virtual void enterDrop_database(MySQLParser::Drop_databaseContext * /*ctx*/) override { }
  virtual void exitDrop_database(MySQLParser::Drop_databaseContext * /*ctx*/) override { }

  virtual void enterDrop_event(MySQLParser::Drop_eventContext * /*ctx*/) override { }
  virtual void exitDrop_event(MySQLParser::Drop_eventContext * /*ctx*/) override { }

  virtual void enterDrop_index(MySQLParser::Drop_indexContext * /*ctx*/) override { }
  virtual void exitDrop_index(MySQLParser::Drop_indexContext * /*ctx*/) override { }

  virtual void enterDrop_logfile_group(MySQLParser::Drop_logfile_groupContext * /*ctx*/) override { }
  virtual void exitDrop_logfile_group(MySQLParser::Drop_logfile_groupContext * /*ctx*/) override { }

  virtual void enterDrop_procedure(MySQLParser::Drop_procedureContext * /*ctx*/) override { }
  virtual void exitDrop_procedure(MySQLParser::Drop_procedureContext * /*ctx*/) override { }

  virtual void enterDrop_function(MySQLParser::Drop_functionContext * /*ctx*/) override { }
  virtual void exitDrop_function(MySQLParser::Drop_functionContext * /*ctx*/) override { }

  virtual void enterDrop_server(MySQLParser::Drop_serverContext * /*ctx*/) override { }
  virtual void exitDrop_server(MySQLParser::Drop_serverContext * /*ctx*/) override { }

  virtual void enterDrop_table(MySQLParser::Drop_tableContext * /*ctx*/) override { }
  virtual void exitDrop_table(MySQLParser::Drop_tableContext * /*ctx*/) override { }

  virtual void enterDrop_tablespace(MySQLParser::Drop_tablespaceContext * /*ctx*/) override { }
  virtual void exitDrop_tablespace(MySQLParser::Drop_tablespaceContext * /*ctx*/) override { }

  virtual void enterDrop_trigger(MySQLParser::Drop_triggerContext * /*ctx*/) override { }
  virtual void exitDrop_trigger(MySQLParser::Drop_triggerContext * /*ctx*/) override { }

  virtual void enterDrop_view(MySQLParser::Drop_viewContext * /*ctx*/) override { }
  virtual void exitDrop_view(MySQLParser::Drop_viewContext * /*ctx*/) override { }

  virtual void enterRename_table(MySQLParser::Rename_tableContext * /*ctx*/) override { }
  virtual void exitRename_table(MySQLParser::Rename_tableContext * /*ctx*/) override { }

  virtual void enterTruncate_table(MySQLParser::Truncate_tableContext * /*ctx*/) override { }
  virtual void exitTruncate_table(MySQLParser::Truncate_tableContext * /*ctx*/) override { }

  virtual void enterCall_statement(MySQLParser::Call_statementContext * /*ctx*/) override { }
  virtual void exitCall_statement(MySQLParser::Call_statementContext * /*ctx*/) override { }

  virtual void enterDelete_statement(MySQLParser::Delete_statementContext * /*ctx*/) override { }
  virtual void exitDelete_statement(MySQLParser::Delete_statementContext * /*ctx*/) override { }

  virtual void enterDo_statement(MySQLParser::Do_statementContext * /*ctx*/) override { }
  virtual void exitDo_statement(MySQLParser::Do_statementContext * /*ctx*/) override { }

  virtual void enterHandler_statement(MySQLParser::Handler_statementContext * /*ctx*/) override { }
  virtual void exitHandler_statement(MySQLParser::Handler_statementContext * /*ctx*/) override { }

  virtual void enterInsert_statement(MySQLParser::Insert_statementContext * /*ctx*/) override { }
  virtual void exitInsert_statement(MySQLParser::Insert_statementContext * /*ctx*/) override { }

  virtual void enterLoad_data_statement(MySQLParser::Load_data_statementContext * /*ctx*/) override { }
  virtual void exitLoad_data_statement(MySQLParser::Load_data_statementContext * /*ctx*/) override { }

  virtual void enterLoad_xml_statement(MySQLParser::Load_xml_statementContext * /*ctx*/) override { }
  virtual void exitLoad_xml_statement(MySQLParser::Load_xml_statementContext * /*ctx*/) override { }

  virtual void enterReplace_statement(MySQLParser::Replace_statementContext * /*ctx*/) override { }
  virtual void exitReplace_statement(MySQLParser::Replace_statementContext * /*ctx*/) override { }

  virtual void enterSimpleSelect(MySQLParser::SimpleSelectContext * /*ctx*/) override { }
  virtual void exitSimpleSelect(MySQLParser::SimpleSelectContext * /*ctx*/) override { }

  virtual void enterParenSelect(MySQLParser::ParenSelectContext * /*ctx*/) override { }
  virtual void exitParenSelect(MySQLParser::ParenSelectContext * /*ctx*/) override { }

  virtual void enterUnionSelect(MySQLParser::UnionSelectContext * /*ctx*/) override { }
  virtual void exitUnionSelect(MySQLParser::UnionSelectContext * /*ctx*/) override { }

  virtual void enterUnionParenSelect(MySQLParser::UnionParenSelectContext * /*ctx*/) override { }
  virtual void exitUnionParenSelect(MySQLParser::UnionParenSelectContext * /*ctx*/) override { }

  virtual void enterUpdate_statement(MySQLParser::Update_statementContext * /*ctx*/) override { }
  virtual void exitUpdate_statement(MySQLParser::Update_statementContext * /*ctx*/) override { }

  virtual void enterInsert_statement_value(MySQLParser::Insert_statement_valueContext * /*ctx*/) override { }
  virtual void exitInsert_statement_value(MySQLParser::Insert_statement_valueContext * /*ctx*/) override { }

  virtual void enterUpdate_elem(MySQLParser::Update_elemContext * /*ctx*/) override { }
  virtual void exitUpdate_elem(MySQLParser::Update_elemContext * /*ctx*/) override { }

  virtual void enterCol_or_uservar(MySQLParser::Col_or_uservarContext * /*ctx*/) override { }
  virtual void exitCol_or_uservar(MySQLParser::Col_or_uservarContext * /*ctx*/) override { }

  virtual void enterSingle_delete_statement(MySQLParser::Single_delete_statementContext * /*ctx*/) override { }
  virtual void exitSingle_delete_statement(MySQLParser::Single_delete_statementContext * /*ctx*/) override { }

  virtual void enterMultiple_delete_statement(MySQLParser::Multiple_delete_statementContext * /*ctx*/) override { }
  virtual void exitMultiple_delete_statement(MySQLParser::Multiple_delete_statementContext * /*ctx*/) override { }

  virtual void enterHandler_open_statement(MySQLParser::Handler_open_statementContext * /*ctx*/) override { }
  virtual void exitHandler_open_statement(MySQLParser::Handler_open_statementContext * /*ctx*/) override { }

  virtual void enterHandler_read_index_statement(MySQLParser::Handler_read_index_statementContext * /*ctx*/) override { }
  virtual void exitHandler_read_index_statement(MySQLParser::Handler_read_index_statementContext * /*ctx*/) override { }

  virtual void enterHandler_read_statement(MySQLParser::Handler_read_statementContext * /*ctx*/) override { }
  virtual void exitHandler_read_statement(MySQLParser::Handler_read_statementContext * /*ctx*/) override { }

  virtual void enterHandler_close_statement(MySQLParser::Handler_close_statementContext * /*ctx*/) override { }
  virtual void exitHandler_close_statement(MySQLParser::Handler_close_statementContext * /*ctx*/) override { }

  virtual void enterSingle_update_statement(MySQLParser::Single_update_statementContext * /*ctx*/) override { }
  virtual void exitSingle_update_statement(MySQLParser::Single_update_statementContext * /*ctx*/) override { }

  virtual void enterMultiple_update_statement(MySQLParser::Multiple_update_statementContext * /*ctx*/) override { }
  virtual void exitMultiple_update_statement(MySQLParser::Multiple_update_statementContext * /*ctx*/) override { }

  virtual void enterOrder_by_clause(MySQLParser::Order_by_clauseContext * /*ctx*/) override { }
  virtual void exitOrder_by_clause(MySQLParser::Order_by_clauseContext * /*ctx*/) override { }

  virtual void enterOrder_by_expression(MySQLParser::Order_by_expressionContext * /*ctx*/) override { }
  virtual void exitOrder_by_expression(MySQLParser::Order_by_expressionContext * /*ctx*/) override { }

  virtual void enterTable_sources(MySQLParser::Table_sourcesContext * /*ctx*/) override { }
  virtual void exitTable_sources(MySQLParser::Table_sourcesContext * /*ctx*/) override { }

  virtual void enterTable_source(MySQLParser::Table_sourceContext * /*ctx*/) override { }
  virtual void exitTable_source(MySQLParser::Table_sourceContext * /*ctx*/) override { }

  virtual void enterAtomTableItem(MySQLParser::AtomTableItemContext * /*ctx*/) override { }
  virtual void exitAtomTableItem(MySQLParser::AtomTableItemContext * /*ctx*/) override { }

  virtual void enterSubqueryTableItem(MySQLParser::SubqueryTableItemContext * /*ctx*/) override { }
  virtual void exitSubqueryTableItem(MySQLParser::SubqueryTableItemContext * /*ctx*/) override { }

  virtual void enterTableSourcesItem(MySQLParser::TableSourcesItemContext * /*ctx*/) override { }
  virtual void exitTableSourcesItem(MySQLParser::TableSourcesItemContext * /*ctx*/) override { }

  virtual void enterIndex_hint(MySQLParser::Index_hintContext * /*ctx*/) override { }
  virtual void exitIndex_hint(MySQLParser::Index_hintContext * /*ctx*/) override { }

  virtual void enterInnerJoin(MySQLParser::InnerJoinContext * /*ctx*/) override { }
  virtual void exitInnerJoin(MySQLParser::InnerJoinContext * /*ctx*/) override { }

  virtual void enterStraightJoin(MySQLParser::StraightJoinContext * /*ctx*/) override { }
  virtual void exitStraightJoin(MySQLParser::StraightJoinContext * /*ctx*/) override { }

  virtual void enterOuterJoin(MySQLParser::OuterJoinContext * /*ctx*/) override { }
  virtual void exitOuterJoin(MySQLParser::OuterJoinContext * /*ctx*/) override { }

  virtual void enterNaturalJoin(MySQLParser::NaturalJoinContext * /*ctx*/) override { }
  virtual void exitNaturalJoin(MySQLParser::NaturalJoinContext * /*ctx*/) override { }

  virtual void enterSubquery(MySQLParser::SubqueryContext * /*ctx*/) override { }
  virtual void exitSubquery(MySQLParser::SubqueryContext * /*ctx*/) override { }

  virtual void enterQuery_expression(MySQLParser::Query_expressionContext * /*ctx*/) override { }
  virtual void exitQuery_expression(MySQLParser::Query_expressionContext * /*ctx*/) override { }

  virtual void enterQuery_expression_nointo(MySQLParser::Query_expression_nointoContext * /*ctx*/) override { }
  virtual void exitQuery_expression_nointo(MySQLParser::Query_expression_nointoContext * /*ctx*/) override { }

  virtual void enterQuery_specification(MySQLParser::Query_specificationContext * /*ctx*/) override { }
  virtual void exitQuery_specification(MySQLParser::Query_specificationContext * /*ctx*/) override { }

  virtual void enterQuery_specification_nointo(MySQLParser::Query_specification_nointoContext * /*ctx*/) override { }
  virtual void exitQuery_specification_nointo(MySQLParser::Query_specification_nointoContext * /*ctx*/) override { }

  virtual void enterUnion_parenth(MySQLParser::Union_parenthContext * /*ctx*/) override { }
  virtual void exitUnion_parenth(MySQLParser::Union_parenthContext * /*ctx*/) override { }

  virtual void enterUnion_statement(MySQLParser::Union_statementContext * /*ctx*/) override { }
  virtual void exitUnion_statement(MySQLParser::Union_statementContext * /*ctx*/) override { }

  virtual void enterSelect_spec(MySQLParser::Select_specContext * /*ctx*/) override { }
  virtual void exitSelect_spec(MySQLParser::Select_specContext * /*ctx*/) override { }

  virtual void enterSelect_list(MySQLParser::Select_listContext * /*ctx*/) override { }
  virtual void exitSelect_list(MySQLParser::Select_listContext * /*ctx*/) override { }

  virtual void enterSellistelAllCol(MySQLParser::SellistelAllColContext * /*ctx*/) override { }
  virtual void exitSellistelAllCol(MySQLParser::SellistelAllColContext * /*ctx*/) override { }

  virtual void enterSellistelCol(MySQLParser::SellistelColContext * /*ctx*/) override { }
  virtual void exitSellistelCol(MySQLParser::SellistelColContext * /*ctx*/) override { }

  virtual void enterSellistelFunc(MySQLParser::SellistelFuncContext * /*ctx*/) override { }
  virtual void exitSellistelFunc(MySQLParser::SellistelFuncContext * /*ctx*/) override { }

  virtual void enterSellistelExpr(MySQLParser::SellistelExprContext * /*ctx*/) override { }
  virtual void exitSellistelExpr(MySQLParser::SellistelExprContext * /*ctx*/) override { }

  virtual void enterSelectIntoVars(MySQLParser::SelectIntoVarsContext * /*ctx*/) override { }
  virtual void exitSelectIntoVars(MySQLParser::SelectIntoVarsContext * /*ctx*/) override { }

  virtual void enterSelectIntoDump(MySQLParser::SelectIntoDumpContext * /*ctx*/) override { }
  virtual void exitSelectIntoDump(MySQLParser::SelectIntoDumpContext * /*ctx*/) override { }

  virtual void enterSelectIntoOutfile(MySQLParser::SelectIntoOutfileContext * /*ctx*/) override { }
  virtual void exitSelectIntoOutfile(MySQLParser::SelectIntoOutfileContext * /*ctx*/) override { }

  virtual void enterFrom_clause(MySQLParser::From_clauseContext * /*ctx*/) override { }
  virtual void exitFrom_clause(MySQLParser::From_clauseContext * /*ctx*/) override { }

  virtual void enterGroup_by_item(MySQLParser::Group_by_itemContext * /*ctx*/) override { }
  virtual void exitGroup_by_item(MySQLParser::Group_by_itemContext * /*ctx*/) override { }

  virtual void enterLimit_clause(MySQLParser::Limit_clauseContext * /*ctx*/) override { }
  virtual void exitLimit_clause(MySQLParser::Limit_clauseContext * /*ctx*/) override { }

  virtual void enterStart_transaction(MySQLParser::Start_transactionContext * /*ctx*/) override { }
  virtual void exitStart_transaction(MySQLParser::Start_transactionContext * /*ctx*/) override { }

  virtual void enterBegin_work(MySQLParser::Begin_workContext * /*ctx*/) override { }
  virtual void exitBegin_work(MySQLParser::Begin_workContext * /*ctx*/) override { }

  virtual void enterCommit_work(MySQLParser::Commit_workContext * /*ctx*/) override { }
  virtual void exitCommit_work(MySQLParser::Commit_workContext * /*ctx*/) override { }

  virtual void enterRollback_work(MySQLParser::Rollback_workContext * /*ctx*/) override { }
  virtual void exitRollback_work(MySQLParser::Rollback_workContext * /*ctx*/) override { }

  virtual void enterSavepoint_statement(MySQLParser::Savepoint_statementContext * /*ctx*/) override { }
  virtual void exitSavepoint_statement(MySQLParser::Savepoint_statementContext * /*ctx*/) override { }

  virtual void enterRollback_statement(MySQLParser::Rollback_statementContext * /*ctx*/) override { }
  virtual void exitRollback_statement(MySQLParser::Rollback_statementContext * /*ctx*/) override { }

  virtual void enterRelease_statement(MySQLParser::Release_statementContext * /*ctx*/) override { }
  virtual void exitRelease_statement(MySQLParser::Release_statementContext * /*ctx*/) override { }

  virtual void enterLock_tables(MySQLParser::Lock_tablesContext * /*ctx*/) override { }
  virtual void exitLock_tables(MySQLParser::Lock_tablesContext * /*ctx*/) override { }

  virtual void enterUnlock_tables(MySQLParser::Unlock_tablesContext * /*ctx*/) override { }
  virtual void exitUnlock_tables(MySQLParser::Unlock_tablesContext * /*ctx*/) override { }

  virtual void enterSet_autocommit_statement(MySQLParser::Set_autocommit_statementContext * /*ctx*/) override { }
  virtual void exitSet_autocommit_statement(MySQLParser::Set_autocommit_statementContext * /*ctx*/) override { }

  virtual void enterSet_transaction_statement(MySQLParser::Set_transaction_statementContext * /*ctx*/) override { }
  virtual void exitSet_transaction_statement(MySQLParser::Set_transaction_statementContext * /*ctx*/) override { }

  virtual void enterTransact_option(MySQLParser::Transact_optionContext * /*ctx*/) override { }
  virtual void exitTransact_option(MySQLParser::Transact_optionContext * /*ctx*/) override { }

  virtual void enterLock_table_element(MySQLParser::Lock_table_elementContext * /*ctx*/) override { }
  virtual void exitLock_table_element(MySQLParser::Lock_table_elementContext * /*ctx*/) override { }

  virtual void enterTrans_characteristic(MySQLParser::Trans_characteristicContext * /*ctx*/) override { }
  virtual void exitTrans_characteristic(MySQLParser::Trans_characteristicContext * /*ctx*/) override { }

  virtual void enterTransaction_level(MySQLParser::Transaction_levelContext * /*ctx*/) override { }
  virtual void exitTransaction_level(MySQLParser::Transaction_levelContext * /*ctx*/) override { }

  virtual void enterChange_master(MySQLParser::Change_masterContext * /*ctx*/) override { }
  virtual void exitChange_master(MySQLParser::Change_masterContext * /*ctx*/) override { }

  virtual void enterChange_repl_filter(MySQLParser::Change_repl_filterContext * /*ctx*/) override { }
  virtual void exitChange_repl_filter(MySQLParser::Change_repl_filterContext * /*ctx*/) override { }

  virtual void enterPurge_binary_logs(MySQLParser::Purge_binary_logsContext * /*ctx*/) override { }
  virtual void exitPurge_binary_logs(MySQLParser::Purge_binary_logsContext * /*ctx*/) override { }

  virtual void enterReset_master(MySQLParser::Reset_masterContext * /*ctx*/) override { }
  virtual void exitReset_master(MySQLParser::Reset_masterContext * /*ctx*/) override { }

  virtual void enterReset_slave(MySQLParser::Reset_slaveContext * /*ctx*/) override { }
  virtual void exitReset_slave(MySQLParser::Reset_slaveContext * /*ctx*/) override { }

  virtual void enterStart_slave(MySQLParser::Start_slaveContext * /*ctx*/) override { }
  virtual void exitStart_slave(MySQLParser::Start_slaveContext * /*ctx*/) override { }

  virtual void enterStop_slave(MySQLParser::Stop_slaveContext * /*ctx*/) override { }
  virtual void exitStop_slave(MySQLParser::Stop_slaveContext * /*ctx*/) override { }

  virtual void enterStart_group_repl(MySQLParser::Start_group_replContext * /*ctx*/) override { }
  virtual void exitStart_group_repl(MySQLParser::Start_group_replContext * /*ctx*/) override { }

  virtual void enterStop_group_repl(MySQLParser::Stop_group_replContext * /*ctx*/) override { }
  virtual void exitStop_group_repl(MySQLParser::Stop_group_replContext * /*ctx*/) override { }

  virtual void enterMasterOptString(MySQLParser::MasterOptStringContext * /*ctx*/) override { }
  virtual void exitMasterOptString(MySQLParser::MasterOptStringContext * /*ctx*/) override { }

  virtual void enterMasterOptDecimal(MySQLParser::MasterOptDecimalContext * /*ctx*/) override { }
  virtual void exitMasterOptDecimal(MySQLParser::MasterOptDecimalContext * /*ctx*/) override { }

  virtual void enterMasterOptBool(MySQLParser::MasterOptBoolContext * /*ctx*/) override { }
  virtual void exitMasterOptBool(MySQLParser::MasterOptBoolContext * /*ctx*/) override { }

  virtual void enterMasterOptReal(MySQLParser::MasterOptRealContext * /*ctx*/) override { }
  virtual void exitMasterOptReal(MySQLParser::MasterOptRealContext * /*ctx*/) override { }

  virtual void enterMasterOptIdList(MySQLParser::MasterOptIdListContext * /*ctx*/) override { }
  virtual void exitMasterOptIdList(MySQLParser::MasterOptIdListContext * /*ctx*/) override { }

  virtual void enterString_master_option(MySQLParser::String_master_optionContext * /*ctx*/) override { }
  virtual void exitString_master_option(MySQLParser::String_master_optionContext * /*ctx*/) override { }

  virtual void enterDecimal_master_option(MySQLParser::Decimal_master_optionContext * /*ctx*/) override { }
  virtual void exitDecimal_master_option(MySQLParser::Decimal_master_optionContext * /*ctx*/) override { }

  virtual void enterBool_master_option(MySQLParser::Bool_master_optionContext * /*ctx*/) override { }
  virtual void exitBool_master_option(MySQLParser::Bool_master_optionContext * /*ctx*/) override { }

  virtual void enterChannel_option(MySQLParser::Channel_optionContext * /*ctx*/) override { }
  virtual void exitChannel_option(MySQLParser::Channel_optionContext * /*ctx*/) override { }

  virtual void enterReplfilterDbList(MySQLParser::ReplfilterDbListContext * /*ctx*/) override { }
  virtual void exitReplfilterDbList(MySQLParser::ReplfilterDbListContext * /*ctx*/) override { }

  virtual void enterReplfilterTableList(MySQLParser::ReplfilterTableListContext * /*ctx*/) override { }
  virtual void exitReplfilterTableList(MySQLParser::ReplfilterTableListContext * /*ctx*/) override { }

  virtual void enterReplfilterStableList(MySQLParser::ReplfilterStableListContext * /*ctx*/) override { }
  virtual void exitReplfilterStableList(MySQLParser::ReplfilterStableListContext * /*ctx*/) override { }

  virtual void enterReplfilterTablepairList(MySQLParser::ReplfilterTablepairListContext * /*ctx*/) override { }
  virtual void exitReplfilterTablepairList(MySQLParser::ReplfilterTablepairListContext * /*ctx*/) override { }

  virtual void enterThread_type(MySQLParser::Thread_typeContext * /*ctx*/) override { }
  virtual void exitThread_type(MySQLParser::Thread_typeContext * /*ctx*/) override { }

  virtual void enterUntilGtidSset(MySQLParser::UntilGtidSsetContext * /*ctx*/) override { }
  virtual void exitUntilGtidSset(MySQLParser::UntilGtidSsetContext * /*ctx*/) override { }

  virtual void enterUntilMasterLog(MySQLParser::UntilMasterLogContext * /*ctx*/) override { }
  virtual void exitUntilMasterLog(MySQLParser::UntilMasterLogContext * /*ctx*/) override { }

  virtual void enterUntilRelayLog(MySQLParser::UntilRelayLogContext * /*ctx*/) override { }
  virtual void exitUntilRelayLog(MySQLParser::UntilRelayLogContext * /*ctx*/) override { }

  virtual void enterUntilSqlGaps(MySQLParser::UntilSqlGapsContext * /*ctx*/) override { }
  virtual void exitUntilSqlGaps(MySQLParser::UntilSqlGapsContext * /*ctx*/) override { }

  virtual void enterStart_slave_connection_option(MySQLParser::Start_slave_connection_optionContext * /*ctx*/) override { }
  virtual void exitStart_slave_connection_option(MySQLParser::Start_slave_connection_optionContext * /*ctx*/) override { }

  virtual void enterGtid_set(MySQLParser::Gtid_setContext * /*ctx*/) override { }
  virtual void exitGtid_set(MySQLParser::Gtid_setContext * /*ctx*/) override { }

  virtual void enterXa_start_transaction(MySQLParser::Xa_start_transactionContext * /*ctx*/) override { }
  virtual void exitXa_start_transaction(MySQLParser::Xa_start_transactionContext * /*ctx*/) override { }

  virtual void enterXa_end_transaction(MySQLParser::Xa_end_transactionContext * /*ctx*/) override { }
  virtual void exitXa_end_transaction(MySQLParser::Xa_end_transactionContext * /*ctx*/) override { }

  virtual void enterXa_prepare(MySQLParser::Xa_prepareContext * /*ctx*/) override { }
  virtual void exitXa_prepare(MySQLParser::Xa_prepareContext * /*ctx*/) override { }

  virtual void enterXa_commit_work(MySQLParser::Xa_commit_workContext * /*ctx*/) override { }
  virtual void exitXa_commit_work(MySQLParser::Xa_commit_workContext * /*ctx*/) override { }

  virtual void enterXa_rollback_work(MySQLParser::Xa_rollback_workContext * /*ctx*/) override { }
  virtual void exitXa_rollback_work(MySQLParser::Xa_rollback_workContext * /*ctx*/) override { }

  virtual void enterXa_recover_work(MySQLParser::Xa_recover_workContext * /*ctx*/) override { }
  virtual void exitXa_recover_work(MySQLParser::Xa_recover_workContext * /*ctx*/) override { }

  virtual void enterPrepare_statement(MySQLParser::Prepare_statementContext * /*ctx*/) override { }
  virtual void exitPrepare_statement(MySQLParser::Prepare_statementContext * /*ctx*/) override { }

  virtual void enterExecute_statement(MySQLParser::Execute_statementContext * /*ctx*/) override { }
  virtual void exitExecute_statement(MySQLParser::Execute_statementContext * /*ctx*/) override { }

  virtual void enterDeallocate_prepare(MySQLParser::Deallocate_prepareContext * /*ctx*/) override { }
  virtual void exitDeallocate_prepare(MySQLParser::Deallocate_prepareContext * /*ctx*/) override { }

  virtual void enterRoutine_body(MySQLParser::Routine_bodyContext * /*ctx*/) override { }
  virtual void exitRoutine_body(MySQLParser::Routine_bodyContext * /*ctx*/) override { }

  virtual void enterBlock_statement(MySQLParser::Block_statementContext * /*ctx*/) override { }
  virtual void exitBlock_statement(MySQLParser::Block_statementContext * /*ctx*/) override { }

  virtual void enterCase_statement(MySQLParser::Case_statementContext * /*ctx*/) override { }
  virtual void exitCase_statement(MySQLParser::Case_statementContext * /*ctx*/) override { }

  virtual void enterIf_statement(MySQLParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(MySQLParser::If_statementContext * /*ctx*/) override { }

  virtual void enterIterate_statement(MySQLParser::Iterate_statementContext * /*ctx*/) override { }
  virtual void exitIterate_statement(MySQLParser::Iterate_statementContext * /*ctx*/) override { }

  virtual void enterLeave_statement(MySQLParser::Leave_statementContext * /*ctx*/) override { }
  virtual void exitLeave_statement(MySQLParser::Leave_statementContext * /*ctx*/) override { }

  virtual void enterLoop_statement(MySQLParser::Loop_statementContext * /*ctx*/) override { }
  virtual void exitLoop_statement(MySQLParser::Loop_statementContext * /*ctx*/) override { }

  virtual void enterRepeat_statement(MySQLParser::Repeat_statementContext * /*ctx*/) override { }
  virtual void exitRepeat_statement(MySQLParser::Repeat_statementContext * /*ctx*/) override { }

  virtual void enterReturn_statement(MySQLParser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(MySQLParser::Return_statementContext * /*ctx*/) override { }

  virtual void enterWhile_statement(MySQLParser::While_statementContext * /*ctx*/) override { }
  virtual void exitWhile_statement(MySQLParser::While_statementContext * /*ctx*/) override { }

  virtual void enterCursor_statement(MySQLParser::Cursor_statementContext * /*ctx*/) override { }
  virtual void exitCursor_statement(MySQLParser::Cursor_statementContext * /*ctx*/) override { }

  virtual void enterDeclare_variable(MySQLParser::Declare_variableContext * /*ctx*/) override { }
  virtual void exitDeclare_variable(MySQLParser::Declare_variableContext * /*ctx*/) override { }

  virtual void enterDeclare_condition(MySQLParser::Declare_conditionContext * /*ctx*/) override { }
  virtual void exitDeclare_condition(MySQLParser::Declare_conditionContext * /*ctx*/) override { }

  virtual void enterDeclare_cursor(MySQLParser::Declare_cursorContext * /*ctx*/) override { }
  virtual void exitDeclare_cursor(MySQLParser::Declare_cursorContext * /*ctx*/) override { }

  virtual void enterDeclare_handler(MySQLParser::Declare_handlerContext * /*ctx*/) override { }
  virtual void exitDeclare_handler(MySQLParser::Declare_handlerContext * /*ctx*/) override { }

  virtual void enterHandler_condition_value(MySQLParser::Handler_condition_valueContext * /*ctx*/) override { }
  virtual void exitHandler_condition_value(MySQLParser::Handler_condition_valueContext * /*ctx*/) override { }

  virtual void enterProcedure_sql_statement(MySQLParser::Procedure_sql_statementContext * /*ctx*/) override { }
  virtual void exitProcedure_sql_statement(MySQLParser::Procedure_sql_statementContext * /*ctx*/) override { }

  virtual void enterAlterUserMysql56(MySQLParser::AlterUserMysql56Context * /*ctx*/) override { }
  virtual void exitAlterUserMysql56(MySQLParser::AlterUserMysql56Context * /*ctx*/) override { }

  virtual void enterAlterUserMysql57(MySQLParser::AlterUserMysql57Context * /*ctx*/) override { }
  virtual void exitAlterUserMysql57(MySQLParser::AlterUserMysql57Context * /*ctx*/) override { }

  virtual void enterCreateUserMysql56(MySQLParser::CreateUserMysql56Context * /*ctx*/) override { }
  virtual void exitCreateUserMysql56(MySQLParser::CreateUserMysql56Context * /*ctx*/) override { }

  virtual void enterCreateUserMysql57(MySQLParser::CreateUserMysql57Context * /*ctx*/) override { }
  virtual void exitCreateUserMysql57(MySQLParser::CreateUserMysql57Context * /*ctx*/) override { }

  virtual void enterDrop_user(MySQLParser::Drop_userContext * /*ctx*/) override { }
  virtual void exitDrop_user(MySQLParser::Drop_userContext * /*ctx*/) override { }

  virtual void enterGrant_statement(MySQLParser::Grant_statementContext * /*ctx*/) override { }
  virtual void exitGrant_statement(MySQLParser::Grant_statementContext * /*ctx*/) override { }

  virtual void enterGrant_proxy(MySQLParser::Grant_proxyContext * /*ctx*/) override { }
  virtual void exitGrant_proxy(MySQLParser::Grant_proxyContext * /*ctx*/) override { }

  virtual void enterRename_user(MySQLParser::Rename_userContext * /*ctx*/) override { }
  virtual void exitRename_user(MySQLParser::Rename_userContext * /*ctx*/) override { }

  virtual void enterDetailRevoke(MySQLParser::DetailRevokeContext * /*ctx*/) override { }
  virtual void exitDetailRevoke(MySQLParser::DetailRevokeContext * /*ctx*/) override { }

  virtual void enterShortRevoke(MySQLParser::ShortRevokeContext * /*ctx*/) override { }
  virtual void exitShortRevoke(MySQLParser::ShortRevokeContext * /*ctx*/) override { }

  virtual void enterRevoke_proxy(MySQLParser::Revoke_proxyContext * /*ctx*/) override { }
  virtual void exitRevoke_proxy(MySQLParser::Revoke_proxyContext * /*ctx*/) override { }

  virtual void enterSet_password_statement(MySQLParser::Set_password_statementContext * /*ctx*/) override { }
  virtual void exitSet_password_statement(MySQLParser::Set_password_statementContext * /*ctx*/) override { }

  virtual void enterUser_password_option(MySQLParser::User_password_optionContext * /*ctx*/) override { }
  virtual void exitUser_password_option(MySQLParser::User_password_optionContext * /*ctx*/) override { }

  virtual void enterAuthByPassword(MySQLParser::AuthByPasswordContext * /*ctx*/) override { }
  virtual void exitAuthByPassword(MySQLParser::AuthByPasswordContext * /*ctx*/) override { }

  virtual void enterAuthByString(MySQLParser::AuthByStringContext * /*ctx*/) override { }
  virtual void exitAuthByString(MySQLParser::AuthByStringContext * /*ctx*/) override { }

  virtual void enterAuthByHash(MySQLParser::AuthByHashContext * /*ctx*/) override { }
  virtual void exitAuthByHash(MySQLParser::AuthByHashContext * /*ctx*/) override { }

  virtual void enterTls_option(MySQLParser::Tls_optionContext * /*ctx*/) override { }
  virtual void exitTls_option(MySQLParser::Tls_optionContext * /*ctx*/) override { }

  virtual void enterUser_resource_option(MySQLParser::User_resource_optionContext * /*ctx*/) override { }
  virtual void exitUser_resource_option(MySQLParser::User_resource_optionContext * /*ctx*/) override { }

  virtual void enterUser_lock_option(MySQLParser::User_lock_optionContext * /*ctx*/) override { }
  virtual void exitUser_lock_option(MySQLParser::User_lock_optionContext * /*ctx*/) override { }

  virtual void enterPrivelege_clause(MySQLParser::Privelege_clauseContext * /*ctx*/) override { }
  virtual void exitPrivelege_clause(MySQLParser::Privelege_clauseContext * /*ctx*/) override { }

  virtual void enterPrivilege(MySQLParser::PrivilegeContext * /*ctx*/) override { }
  virtual void exitPrivilege(MySQLParser::PrivilegeContext * /*ctx*/) override { }

  virtual void enterPrivilege_level(MySQLParser::Privilege_levelContext * /*ctx*/) override { }
  virtual void exitPrivilege_level(MySQLParser::Privilege_levelContext * /*ctx*/) override { }

  virtual void enterSet_password_option(MySQLParser::Set_password_optionContext * /*ctx*/) override { }
  virtual void exitSet_password_option(MySQLParser::Set_password_optionContext * /*ctx*/) override { }

  virtual void enterAnalyze_table(MySQLParser::Analyze_tableContext * /*ctx*/) override { }
  virtual void exitAnalyze_table(MySQLParser::Analyze_tableContext * /*ctx*/) override { }

  virtual void enterCheck_table(MySQLParser::Check_tableContext * /*ctx*/) override { }
  virtual void exitCheck_table(MySQLParser::Check_tableContext * /*ctx*/) override { }

  virtual void enterChecksum_table(MySQLParser::Checksum_tableContext * /*ctx*/) override { }
  virtual void exitChecksum_table(MySQLParser::Checksum_tableContext * /*ctx*/) override { }

  virtual void enterOptimize_table(MySQLParser::Optimize_tableContext * /*ctx*/) override { }
  virtual void exitOptimize_table(MySQLParser::Optimize_tableContext * /*ctx*/) override { }

  virtual void enterRepair_table(MySQLParser::Repair_tableContext * /*ctx*/) override { }
  virtual void exitRepair_table(MySQLParser::Repair_tableContext * /*ctx*/) override { }

  virtual void enterCheck_table_option(MySQLParser::Check_table_optionContext * /*ctx*/) override { }
  virtual void exitCheck_table_option(MySQLParser::Check_table_optionContext * /*ctx*/) override { }

  virtual void enterCreate_udfunction(MySQLParser::Create_udfunctionContext * /*ctx*/) override { }
  virtual void exitCreate_udfunction(MySQLParser::Create_udfunctionContext * /*ctx*/) override { }

  virtual void enterInstall_plugin(MySQLParser::Install_pluginContext * /*ctx*/) override { }
  virtual void exitInstall_plugin(MySQLParser::Install_pluginContext * /*ctx*/) override { }

  virtual void enterUninstall_plugin(MySQLParser::Uninstall_pluginContext * /*ctx*/) override { }
  virtual void exitUninstall_plugin(MySQLParser::Uninstall_pluginContext * /*ctx*/) override { }

  virtual void enterSetVariableAssignment(MySQLParser::SetVariableAssignmentContext * /*ctx*/) override { }
  virtual void exitSetVariableAssignment(MySQLParser::SetVariableAssignmentContext * /*ctx*/) override { }

  virtual void enterSetCharset(MySQLParser::SetCharsetContext * /*ctx*/) override { }
  virtual void exitSetCharset(MySQLParser::SetCharsetContext * /*ctx*/) override { }

  virtual void enterSetNames(MySQLParser::SetNamesContext * /*ctx*/) override { }
  virtual void exitSetNames(MySQLParser::SetNamesContext * /*ctx*/) override { }

  virtual void enterSetPasswordStatement(MySQLParser::SetPasswordStatementContext * /*ctx*/) override { }
  virtual void exitSetPasswordStatement(MySQLParser::SetPasswordStatementContext * /*ctx*/) override { }

  virtual void enterSetTransaction(MySQLParser::SetTransactionContext * /*ctx*/) override { }
  virtual void exitSetTransaction(MySQLParser::SetTransactionContext * /*ctx*/) override { }

  virtual void enterSetAutocommit(MySQLParser::SetAutocommitContext * /*ctx*/) override { }
  virtual void exitSetAutocommit(MySQLParser::SetAutocommitContext * /*ctx*/) override { }

  virtual void enterShowMasterlogs(MySQLParser::ShowMasterlogsContext * /*ctx*/) override { }
  virtual void exitShowMasterlogs(MySQLParser::ShowMasterlogsContext * /*ctx*/) override { }

  virtual void enterShowLogevents(MySQLParser::ShowLogeventsContext * /*ctx*/) override { }
  virtual void exitShowLogevents(MySQLParser::ShowLogeventsContext * /*ctx*/) override { }

  virtual void enterShowObjWithFilter(MySQLParser::ShowObjWithFilterContext * /*ctx*/) override { }
  virtual void exitShowObjWithFilter(MySQLParser::ShowObjWithFilterContext * /*ctx*/) override { }

  virtual void enterShowColumns(MySQLParser::ShowColumnsContext * /*ctx*/) override { }
  virtual void exitShowColumns(MySQLParser::ShowColumnsContext * /*ctx*/) override { }

  virtual void enterShowCreateDb(MySQLParser::ShowCreateDbContext * /*ctx*/) override { }
  virtual void exitShowCreateDb(MySQLParser::ShowCreateDbContext * /*ctx*/) override { }

  virtual void enterShowCreateFullidobj(MySQLParser::ShowCreateFullidobjContext * /*ctx*/) override { }
  virtual void exitShowCreateFullidobj(MySQLParser::ShowCreateFullidobjContext * /*ctx*/) override { }

  virtual void enterShowCreateUser(MySQLParser::ShowCreateUserContext * /*ctx*/) override { }
  virtual void exitShowCreateUser(MySQLParser::ShowCreateUserContext * /*ctx*/) override { }

  virtual void enterShowEngine(MySQLParser::ShowEngineContext * /*ctx*/) override { }
  virtual void exitShowEngine(MySQLParser::ShowEngineContext * /*ctx*/) override { }

  virtual void enterShowGlobalinfo(MySQLParser::ShowGlobalinfoContext * /*ctx*/) override { }
  virtual void exitShowGlobalinfo(MySQLParser::ShowGlobalinfoContext * /*ctx*/) override { }

  virtual void enterShowErrWarn(MySQLParser::ShowErrWarnContext * /*ctx*/) override { }
  virtual void exitShowErrWarn(MySQLParser::ShowErrWarnContext * /*ctx*/) override { }

  virtual void enterShowCountErrWarn(MySQLParser::ShowCountErrWarnContext * /*ctx*/) override { }
  virtual void exitShowCountErrWarn(MySQLParser::ShowCountErrWarnContext * /*ctx*/) override { }

  virtual void enterShowFromschemaFilter(MySQLParser::ShowFromschemaFilterContext * /*ctx*/) override { }
  virtual void exitShowFromschemaFilter(MySQLParser::ShowFromschemaFilterContext * /*ctx*/) override { }

  virtual void enterShowRoutinecode(MySQLParser::ShowRoutinecodeContext * /*ctx*/) override { }
  virtual void exitShowRoutinecode(MySQLParser::ShowRoutinecodeContext * /*ctx*/) override { }

  virtual void enterShowGrants(MySQLParser::ShowGrantsContext * /*ctx*/) override { }
  virtual void exitShowGrants(MySQLParser::ShowGrantsContext * /*ctx*/) override { }

  virtual void enterShowIndexes(MySQLParser::ShowIndexesContext * /*ctx*/) override { }
  virtual void exitShowIndexes(MySQLParser::ShowIndexesContext * /*ctx*/) override { }

  virtual void enterShowOpentables(MySQLParser::ShowOpentablesContext * /*ctx*/) override { }
  virtual void exitShowOpentables(MySQLParser::ShowOpentablesContext * /*ctx*/) override { }

  virtual void enterShowProfile(MySQLParser::ShowProfileContext * /*ctx*/) override { }
  virtual void exitShowProfile(MySQLParser::ShowProfileContext * /*ctx*/) override { }

  virtual void enterShowSlavestatus(MySQLParser::ShowSlavestatusContext * /*ctx*/) override { }
  virtual void exitShowSlavestatus(MySQLParser::ShowSlavestatusContext * /*ctx*/) override { }

  virtual void enterVariable_clause(MySQLParser::Variable_clauseContext * /*ctx*/) override { }
  virtual void exitVariable_clause(MySQLParser::Variable_clauseContext * /*ctx*/) override { }

  virtual void enterShow_filter(MySQLParser::Show_filterContext * /*ctx*/) override { }
  virtual void exitShow_filter(MySQLParser::Show_filterContext * /*ctx*/) override { }

  virtual void enterShow_profile_type(MySQLParser::Show_profile_typeContext * /*ctx*/) override { }
  virtual void exitShow_profile_type(MySQLParser::Show_profile_typeContext * /*ctx*/) override { }

  virtual void enterBinlog_statement(MySQLParser::Binlog_statementContext * /*ctx*/) override { }
  virtual void exitBinlog_statement(MySQLParser::Binlog_statementContext * /*ctx*/) override { }

  virtual void enterCache_index_statement(MySQLParser::Cache_index_statementContext * /*ctx*/) override { }
  virtual void exitCache_index_statement(MySQLParser::Cache_index_statementContext * /*ctx*/) override { }

  virtual void enterFlush_statement(MySQLParser::Flush_statementContext * /*ctx*/) override { }
  virtual void exitFlush_statement(MySQLParser::Flush_statementContext * /*ctx*/) override { }

  virtual void enterKill_statement(MySQLParser::Kill_statementContext * /*ctx*/) override { }
  virtual void exitKill_statement(MySQLParser::Kill_statementContext * /*ctx*/) override { }

  virtual void enterLoad_index_into_cache(MySQLParser::Load_index_into_cacheContext * /*ctx*/) override { }
  virtual void exitLoad_index_into_cache(MySQLParser::Load_index_into_cacheContext * /*ctx*/) override { }

  virtual void enterReset_statement(MySQLParser::Reset_statementContext * /*ctx*/) override { }
  virtual void exitReset_statement(MySQLParser::Reset_statementContext * /*ctx*/) override { }

  virtual void enterShutdown_statement(MySQLParser::Shutdown_statementContext * /*ctx*/) override { }
  virtual void exitShutdown_statement(MySQLParser::Shutdown_statementContext * /*ctx*/) override { }

  virtual void enterTbl_index_list(MySQLParser::Tbl_index_listContext * /*ctx*/) override { }
  virtual void exitTbl_index_list(MySQLParser::Tbl_index_listContext * /*ctx*/) override { }

  virtual void enterFlush_option(MySQLParser::Flush_optionContext * /*ctx*/) override { }
  virtual void exitFlush_option(MySQLParser::Flush_optionContext * /*ctx*/) override { }

  virtual void enterLoad_tbl_index_list(MySQLParser::Load_tbl_index_listContext * /*ctx*/) override { }
  virtual void exitLoad_tbl_index_list(MySQLParser::Load_tbl_index_listContext * /*ctx*/) override { }

  virtual void enterSimple_describe_statement(MySQLParser::Simple_describe_statementContext * /*ctx*/) override { }
  virtual void exitSimple_describe_statement(MySQLParser::Simple_describe_statementContext * /*ctx*/) override { }

  virtual void enterFull_describe_statement(MySQLParser::Full_describe_statementContext * /*ctx*/) override { }
  virtual void exitFull_describe_statement(MySQLParser::Full_describe_statementContext * /*ctx*/) override { }

  virtual void enterHelp_statement(MySQLParser::Help_statementContext * /*ctx*/) override { }
  virtual void exitHelp_statement(MySQLParser::Help_statementContext * /*ctx*/) override { }

  virtual void enterUse_statement(MySQLParser::Use_statementContext * /*ctx*/) override { }
  virtual void exitUse_statement(MySQLParser::Use_statementContext * /*ctx*/) override { }

  virtual void enterDescstmtDescObj(MySQLParser::DescstmtDescObjContext * /*ctx*/) override { }
  virtual void exitDescstmtDescObj(MySQLParser::DescstmtDescObjContext * /*ctx*/) override { }

  virtual void enterConnectionDescObj(MySQLParser::ConnectionDescObjContext * /*ctx*/) override { }
  virtual void exitConnectionDescObj(MySQLParser::ConnectionDescObjContext * /*ctx*/) override { }

  virtual void enterTable_name(MySQLParser::Table_nameContext * /*ctx*/) override { }
  virtual void exitTable_name(MySQLParser::Table_nameContext * /*ctx*/) override { }

  virtual void enterFull_id(MySQLParser::Full_idContext * /*ctx*/) override { }
  virtual void exitFull_id(MySQLParser::Full_idContext * /*ctx*/) override { }

  virtual void enterFull_column_name(MySQLParser::Full_column_nameContext * /*ctx*/) override { }
  virtual void exitFull_column_name(MySQLParser::Full_column_nameContext * /*ctx*/) override { }

  virtual void enterIndex_col_name(MySQLParser::Index_col_nameContext * /*ctx*/) override { }
  virtual void exitIndex_col_name(MySQLParser::Index_col_nameContext * /*ctx*/) override { }

  virtual void enterUser_name(MySQLParser::User_nameContext * /*ctx*/) override { }
  virtual void exitUser_name(MySQLParser::User_nameContext * /*ctx*/) override { }

  virtual void enterMysql_variable(MySQLParser::Mysql_variableContext * /*ctx*/) override { }
  virtual void exitMysql_variable(MySQLParser::Mysql_variableContext * /*ctx*/) override { }

  virtual void enterCharset_name(MySQLParser::Charset_nameContext * /*ctx*/) override { }
  virtual void exitCharset_name(MySQLParser::Charset_nameContext * /*ctx*/) override { }

  virtual void enterCollation_name(MySQLParser::Collation_nameContext * /*ctx*/) override { }
  virtual void exitCollation_name(MySQLParser::Collation_nameContext * /*ctx*/) override { }

  virtual void enterEngine_name(MySQLParser::Engine_nameContext * /*ctx*/) override { }
  virtual void exitEngine_name(MySQLParser::Engine_nameContext * /*ctx*/) override { }

  virtual void enterUuid_set(MySQLParser::Uuid_setContext * /*ctx*/) override { }
  virtual void exitUuid_set(MySQLParser::Uuid_setContext * /*ctx*/) override { }

  virtual void enterXid(MySQLParser::XidContext * /*ctx*/) override { }
  virtual void exitXid(MySQLParser::XidContext * /*ctx*/) override { }

  virtual void enterXid_string_id(MySQLParser::Xid_string_idContext * /*ctx*/) override { }
  virtual void exitXid_string_id(MySQLParser::Xid_string_idContext * /*ctx*/) override { }

  virtual void enterAuth_plugin(MySQLParser::Auth_pluginContext * /*ctx*/) override { }
  virtual void exitAuth_plugin(MySQLParser::Auth_pluginContext * /*ctx*/) override { }

  virtual void enterId_(MySQLParser::Id_Context * /*ctx*/) override { }
  virtual void exitId_(MySQLParser::Id_Context * /*ctx*/) override { }

  virtual void enterSimple_id(MySQLParser::Simple_idContext * /*ctx*/) override { }
  virtual void exitSimple_id(MySQLParser::Simple_idContext * /*ctx*/) override { }

  virtual void enterDot_ext_id(MySQLParser::Dot_ext_idContext * /*ctx*/) override { }
  virtual void exitDot_ext_id(MySQLParser::Dot_ext_idContext * /*ctx*/) override { }

  virtual void enterDecimal_literal(MySQLParser::Decimal_literalContext * /*ctx*/) override { }
  virtual void exitDecimal_literal(MySQLParser::Decimal_literalContext * /*ctx*/) override { }

  virtual void enterFilesize_literal(MySQLParser::Filesize_literalContext * /*ctx*/) override { }
  virtual void exitFilesize_literal(MySQLParser::Filesize_literalContext * /*ctx*/) override { }

  virtual void enterString_literal(MySQLParser::String_literalContext * /*ctx*/) override { }
  virtual void exitString_literal(MySQLParser::String_literalContext * /*ctx*/) override { }

  virtual void enterBoolean_literal(MySQLParser::Boolean_literalContext * /*ctx*/) override { }
  virtual void exitBoolean_literal(MySQLParser::Boolean_literalContext * /*ctx*/) override { }

  virtual void enterHexadecimal_literal(MySQLParser::Hexadecimal_literalContext * /*ctx*/) override { }
  virtual void exitHexadecimal_literal(MySQLParser::Hexadecimal_literalContext * /*ctx*/) override { }

  virtual void enterNull_notnull(MySQLParser::Null_notnullContext * /*ctx*/) override { }
  virtual void exitNull_notnull(MySQLParser::Null_notnullContext * /*ctx*/) override { }

  virtual void enterConstant(MySQLParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(MySQLParser::ConstantContext * /*ctx*/) override { }

  virtual void enterCharDatatype(MySQLParser::CharDatatypeContext * /*ctx*/) override { }
  virtual void exitCharDatatype(MySQLParser::CharDatatypeContext * /*ctx*/) override { }

  virtual void enterDimensionDatatype(MySQLParser::DimensionDatatypeContext * /*ctx*/) override { }
  virtual void exitDimensionDatatype(MySQLParser::DimensionDatatypeContext * /*ctx*/) override { }

  virtual void enterSimpleDatatype(MySQLParser::SimpleDatatypeContext * /*ctx*/) override { }
  virtual void exitSimpleDatatype(MySQLParser::SimpleDatatypeContext * /*ctx*/) override { }

  virtual void enterCollectCharDatatype(MySQLParser::CollectCharDatatypeContext * /*ctx*/) override { }
  virtual void exitCollectCharDatatype(MySQLParser::CollectCharDatatypeContext * /*ctx*/) override { }

  virtual void enterSpatialDatatype(MySQLParser::SpatialDatatypeContext * /*ctx*/) override { }
  virtual void exitSpatialDatatype(MySQLParser::SpatialDatatypeContext * /*ctx*/) override { }

  virtual void enterData_type_to_convert(MySQLParser::Data_type_to_convertContext * /*ctx*/) override { }
  virtual void exitData_type_to_convert(MySQLParser::Data_type_to_convertContext * /*ctx*/) override { }

  virtual void enterSpatial_data_type(MySQLParser::Spatial_data_typeContext * /*ctx*/) override { }
  virtual void exitSpatial_data_type(MySQLParser::Spatial_data_typeContext * /*ctx*/) override { }

  virtual void enterLength_one_dimension(MySQLParser::Length_one_dimensionContext * /*ctx*/) override { }
  virtual void exitLength_one_dimension(MySQLParser::Length_one_dimensionContext * /*ctx*/) override { }

  virtual void enterLength_two_dimension(MySQLParser::Length_two_dimensionContext * /*ctx*/) override { }
  virtual void exitLength_two_dimension(MySQLParser::Length_two_dimensionContext * /*ctx*/) override { }

  virtual void enterLength_two_optional_dimension(MySQLParser::Length_two_optional_dimensionContext * /*ctx*/) override { }
  virtual void exitLength_two_optional_dimension(MySQLParser::Length_two_optional_dimensionContext * /*ctx*/) override { }

  virtual void enterId_list(MySQLParser::Id_listContext * /*ctx*/) override { }
  virtual void exitId_list(MySQLParser::Id_listContext * /*ctx*/) override { }

  virtual void enterTable_list(MySQLParser::Table_listContext * /*ctx*/) override { }
  virtual void exitTable_list(MySQLParser::Table_listContext * /*ctx*/) override { }

  virtual void enterTable_pair_list(MySQLParser::Table_pair_listContext * /*ctx*/) override { }
  virtual void exitTable_pair_list(MySQLParser::Table_pair_listContext * /*ctx*/) override { }

  virtual void enterIndex_colname_list(MySQLParser::Index_colname_listContext * /*ctx*/) override { }
  virtual void exitIndex_colname_list(MySQLParser::Index_colname_listContext * /*ctx*/) override { }

  virtual void enterExpression_list(MySQLParser::Expression_listContext * /*ctx*/) override { }
  virtual void exitExpression_list(MySQLParser::Expression_listContext * /*ctx*/) override { }

  virtual void enterConstant_list(MySQLParser::Constant_listContext * /*ctx*/) override { }
  virtual void exitConstant_list(MySQLParser::Constant_listContext * /*ctx*/) override { }

  virtual void enterSimple_string_list(MySQLParser::Simple_string_listContext * /*ctx*/) override { }
  virtual void exitSimple_string_list(MySQLParser::Simple_string_listContext * /*ctx*/) override { }

  virtual void enterUser_var_list(MySQLParser::User_var_listContext * /*ctx*/) override { }
  virtual void exitUser_var_list(MySQLParser::User_var_listContext * /*ctx*/) override { }

  virtual void enterDefault_value(MySQLParser::Default_valueContext * /*ctx*/) override { }
  virtual void exitDefault_value(MySQLParser::Default_valueContext * /*ctx*/) override { }

  virtual void enterIf_exists(MySQLParser::If_existsContext * /*ctx*/) override { }
  virtual void exitIf_exists(MySQLParser::If_existsContext * /*ctx*/) override { }

  virtual void enterIf_not_exists(MySQLParser::If_not_existsContext * /*ctx*/) override { }
  virtual void exitIf_not_exists(MySQLParser::If_not_existsContext * /*ctx*/) override { }

  virtual void enterSpecificFunctionCall(MySQLParser::SpecificFunctionCallContext * /*ctx*/) override { }
  virtual void exitSpecificFunctionCall(MySQLParser::SpecificFunctionCallContext * /*ctx*/) override { }

  virtual void enterAggregateFunctionCall(MySQLParser::AggregateFunctionCallContext * /*ctx*/) override { }
  virtual void exitAggregateFunctionCall(MySQLParser::AggregateFunctionCallContext * /*ctx*/) override { }

  virtual void enterScalarFunctionCall(MySQLParser::ScalarFunctionCallContext * /*ctx*/) override { }
  virtual void exitScalarFunctionCall(MySQLParser::ScalarFunctionCallContext * /*ctx*/) override { }

  virtual void enterUdfFunctionCall(MySQLParser::UdfFunctionCallContext * /*ctx*/) override { }
  virtual void exitUdfFunctionCall(MySQLParser::UdfFunctionCallContext * /*ctx*/) override { }

  virtual void enterSimpleSpecificFCall(MySQLParser::SimpleSpecificFCallContext * /*ctx*/) override { }
  virtual void exitSimpleSpecificFCall(MySQLParser::SimpleSpecificFCallContext * /*ctx*/) override { }

  virtual void enterConvertDataTypeFCall(MySQLParser::ConvertDataTypeFCallContext * /*ctx*/) override { }
  virtual void exitConvertDataTypeFCall(MySQLParser::ConvertDataTypeFCallContext * /*ctx*/) override { }

  virtual void enterValuesFCall(MySQLParser::ValuesFCallContext * /*ctx*/) override { }
  virtual void exitValuesFCall(MySQLParser::ValuesFCallContext * /*ctx*/) override { }

  virtual void enterCaseFCall(MySQLParser::CaseFCallContext * /*ctx*/) override { }
  virtual void exitCaseFCall(MySQLParser::CaseFCallContext * /*ctx*/) override { }

  virtual void enterCharFCall(MySQLParser::CharFCallContext * /*ctx*/) override { }
  virtual void exitCharFCall(MySQLParser::CharFCallContext * /*ctx*/) override { }

  virtual void enterPositionFCall(MySQLParser::PositionFCallContext * /*ctx*/) override { }
  virtual void exitPositionFCall(MySQLParser::PositionFCallContext * /*ctx*/) override { }

  virtual void enterSubstrFCall(MySQLParser::SubstrFCallContext * /*ctx*/) override { }
  virtual void exitSubstrFCall(MySQLParser::SubstrFCallContext * /*ctx*/) override { }

  virtual void enterTrimFCall(MySQLParser::TrimFCallContext * /*ctx*/) override { }
  virtual void exitTrimFCall(MySQLParser::TrimFCallContext * /*ctx*/) override { }

  virtual void enterWeightFCall(MySQLParser::WeightFCallContext * /*ctx*/) override { }
  virtual void exitWeightFCall(MySQLParser::WeightFCallContext * /*ctx*/) override { }

  virtual void enterExtractFCall(MySQLParser::ExtractFCallContext * /*ctx*/) override { }
  virtual void exitExtractFCall(MySQLParser::ExtractFCallContext * /*ctx*/) override { }

  virtual void enterGetFormatFCall(MySQLParser::GetFormatFCallContext * /*ctx*/) override { }
  virtual void exitGetFormatFCall(MySQLParser::GetFormatFCallContext * /*ctx*/) override { }

  virtual void enterLevelWeightFList(MySQLParser::LevelWeightFListContext * /*ctx*/) override { }
  virtual void exitLevelWeightFList(MySQLParser::LevelWeightFListContext * /*ctx*/) override { }

  virtual void enterLevelWeightFRange(MySQLParser::LevelWeightFRangeContext * /*ctx*/) override { }
  virtual void exitLevelWeightFRange(MySQLParser::LevelWeightFRangeContext * /*ctx*/) override { }

  virtual void enterAggregate_windowed_function(MySQLParser::Aggregate_windowed_functionContext * /*ctx*/) override { }
  virtual void exitAggregate_windowed_function(MySQLParser::Aggregate_windowed_functionContext * /*ctx*/) override { }

  virtual void enterScalar_function_name(MySQLParser::Scalar_function_nameContext * /*ctx*/) override { }
  virtual void exitScalar_function_name(MySQLParser::Scalar_function_nameContext * /*ctx*/) override { }

  virtual void enterFunction_args(MySQLParser::Function_argsContext * /*ctx*/) override { }
  virtual void exitFunction_args(MySQLParser::Function_argsContext * /*ctx*/) override { }

  virtual void enterFunction_arg(MySQLParser::Function_argContext * /*ctx*/) override { }
  virtual void exitFunction_arg(MySQLParser::Function_argContext * /*ctx*/) override { }

  virtual void enterIsExpression(MySQLParser::IsExpressionContext * /*ctx*/) override { }
  virtual void exitIsExpression(MySQLParser::IsExpressionContext * /*ctx*/) override { }

  virtual void enterNotExpression(MySQLParser::NotExpressionContext * /*ctx*/) override { }
  virtual void exitNotExpression(MySQLParser::NotExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalExpression(MySQLParser::LogicalExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalExpression(MySQLParser::LogicalExpressionContext * /*ctx*/) override { }

  virtual void enterPredicateExpression(MySQLParser::PredicateExpressionContext * /*ctx*/) override { }
  virtual void exitPredicateExpression(MySQLParser::PredicateExpressionContext * /*ctx*/) override { }

  virtual void enterSoundsLikePredicate(MySQLParser::SoundsLikePredicateContext * /*ctx*/) override { }
  virtual void exitSoundsLikePredicate(MySQLParser::SoundsLikePredicateContext * /*ctx*/) override { }

  virtual void enterExpressionAtomPredicate(MySQLParser::ExpressionAtomPredicateContext * /*ctx*/) override { }
  virtual void exitExpressionAtomPredicate(MySQLParser::ExpressionAtomPredicateContext * /*ctx*/) override { }

  virtual void enterInPredicate(MySQLParser::InPredicateContext * /*ctx*/) override { }
  virtual void exitInPredicate(MySQLParser::InPredicateContext * /*ctx*/) override { }

  virtual void enterSubqueryComparasionPredicate(MySQLParser::SubqueryComparasionPredicateContext * /*ctx*/) override { }
  virtual void exitSubqueryComparasionPredicate(MySQLParser::SubqueryComparasionPredicateContext * /*ctx*/) override { }

  virtual void enterBetweenPredicate(MySQLParser::BetweenPredicateContext * /*ctx*/) override { }
  virtual void exitBetweenPredicate(MySQLParser::BetweenPredicateContext * /*ctx*/) override { }

  virtual void enterBinaryComparasionPredicate(MySQLParser::BinaryComparasionPredicateContext * /*ctx*/) override { }
  virtual void exitBinaryComparasionPredicate(MySQLParser::BinaryComparasionPredicateContext * /*ctx*/) override { }

  virtual void enterIsNullPredicate(MySQLParser::IsNullPredicateContext * /*ctx*/) override { }
  virtual void exitIsNullPredicate(MySQLParser::IsNullPredicateContext * /*ctx*/) override { }

  virtual void enterLikePredicate(MySQLParser::LikePredicateContext * /*ctx*/) override { }
  virtual void exitLikePredicate(MySQLParser::LikePredicateContext * /*ctx*/) override { }

  virtual void enterRegexpPredicate(MySQLParser::RegexpPredicateContext * /*ctx*/) override { }
  virtual void exitRegexpPredicate(MySQLParser::RegexpPredicateContext * /*ctx*/) override { }

  virtual void enterUnaryExpressionAtom(MySQLParser::UnaryExpressionAtomContext * /*ctx*/) override { }
  virtual void exitUnaryExpressionAtom(MySQLParser::UnaryExpressionAtomContext * /*ctx*/) override { }

  virtual void enterExistsExpessionAtom(MySQLParser::ExistsExpessionAtomContext * /*ctx*/) override { }
  virtual void exitExistsExpessionAtom(MySQLParser::ExistsExpessionAtomContext * /*ctx*/) override { }

  virtual void enterConstantExpressionAtom(MySQLParser::ConstantExpressionAtomContext * /*ctx*/) override { }
  virtual void exitConstantExpressionAtom(MySQLParser::ConstantExpressionAtomContext * /*ctx*/) override { }

  virtual void enterFunctionCallExpressionAtom(MySQLParser::FunctionCallExpressionAtomContext * /*ctx*/) override { }
  virtual void exitFunctionCallExpressionAtom(MySQLParser::FunctionCallExpressionAtomContext * /*ctx*/) override { }

  virtual void enterMysqlVariableExpressionAtom(MySQLParser::MysqlVariableExpressionAtomContext * /*ctx*/) override { }
  virtual void exitMysqlVariableExpressionAtom(MySQLParser::MysqlVariableExpressionAtomContext * /*ctx*/) override { }

  virtual void enterBinaryExpressionAtom(MySQLParser::BinaryExpressionAtomContext * /*ctx*/) override { }
  virtual void exitBinaryExpressionAtom(MySQLParser::BinaryExpressionAtomContext * /*ctx*/) override { }

  virtual void enterFullColumnNameExpressionAtom(MySQLParser::FullColumnNameExpressionAtomContext * /*ctx*/) override { }
  virtual void exitFullColumnNameExpressionAtom(MySQLParser::FullColumnNameExpressionAtomContext * /*ctx*/) override { }

  virtual void enterDefaultExpressionAtom(MySQLParser::DefaultExpressionAtomContext * /*ctx*/) override { }
  virtual void exitDefaultExpressionAtom(MySQLParser::DefaultExpressionAtomContext * /*ctx*/) override { }

  virtual void enterBitExpressionAtom(MySQLParser::BitExpressionAtomContext * /*ctx*/) override { }
  virtual void exitBitExpressionAtom(MySQLParser::BitExpressionAtomContext * /*ctx*/) override { }

  virtual void enterNestedExpressionAtom(MySQLParser::NestedExpressionAtomContext * /*ctx*/) override { }
  virtual void exitNestedExpressionAtom(MySQLParser::NestedExpressionAtomContext * /*ctx*/) override { }

  virtual void enterMathExpressionAtom(MySQLParser::MathExpressionAtomContext * /*ctx*/) override { }
  virtual void exitMathExpressionAtom(MySQLParser::MathExpressionAtomContext * /*ctx*/) override { }

  virtual void enterIntervalExpressionAtom(MySQLParser::IntervalExpressionAtomContext * /*ctx*/) override { }
  virtual void exitIntervalExpressionAtom(MySQLParser::IntervalExpressionAtomContext * /*ctx*/) override { }

  virtual void enterUnary_operator(MySQLParser::Unary_operatorContext * /*ctx*/) override { }
  virtual void exitUnary_operator(MySQLParser::Unary_operatorContext * /*ctx*/) override { }

  virtual void enterComparison_operator(MySQLParser::Comparison_operatorContext * /*ctx*/) override { }
  virtual void exitComparison_operator(MySQLParser::Comparison_operatorContext * /*ctx*/) override { }

  virtual void enterLogical_operator(MySQLParser::Logical_operatorContext * /*ctx*/) override { }
  virtual void exitLogical_operator(MySQLParser::Logical_operatorContext * /*ctx*/) override { }

  virtual void enterBit_operator(MySQLParser::Bit_operatorContext * /*ctx*/) override { }
  virtual void exitBit_operator(MySQLParser::Bit_operatorContext * /*ctx*/) override { }

  virtual void enterMath_operator(MySQLParser::Math_operatorContext * /*ctx*/) override { }
  virtual void exitMath_operator(MySQLParser::Math_operatorContext * /*ctx*/) override { }

  virtual void enterCharset_name_base(MySQLParser::Charset_name_baseContext * /*ctx*/) override { }
  virtual void exitCharset_name_base(MySQLParser::Charset_name_baseContext * /*ctx*/) override { }

  virtual void enterTransaction_level_base(MySQLParser::Transaction_level_baseContext * /*ctx*/) override { }
  virtual void exitTransaction_level_base(MySQLParser::Transaction_level_baseContext * /*ctx*/) override { }

  virtual void enterPrivileges_base(MySQLParser::Privileges_baseContext * /*ctx*/) override { }
  virtual void exitPrivileges_base(MySQLParser::Privileges_baseContext * /*ctx*/) override { }

  virtual void enterInterval_type_base(MySQLParser::Interval_type_baseContext * /*ctx*/) override { }
  virtual void exitInterval_type_base(MySQLParser::Interval_type_baseContext * /*ctx*/) override { }

  virtual void enterData_type_base(MySQLParser::Data_type_baseContext * /*ctx*/) override { }
  virtual void exitData_type_base(MySQLParser::Data_type_baseContext * /*ctx*/) override { }

  virtual void enterKeywords_can_be_id(MySQLParser::Keywords_can_be_idContext * /*ctx*/) override { }
  virtual void exitKeywords_can_be_id(MySQLParser::Keywords_can_be_idContext * /*ctx*/) override { }

  virtual void enterFunction_name_base(MySQLParser::Function_name_baseContext * /*ctx*/) override { }
  virtual void exitFunction_name_base(MySQLParser::Function_name_baseContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace parser

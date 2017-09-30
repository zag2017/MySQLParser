
// Generated from MySQLParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MySQLParserVisitor.h"


namespace parser {

/**
 * This class provides an empty implementation of MySQLParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MySQLParserBaseVisitor : public MySQLParserVisitor {
public:

  virtual antlrcpp::Any visitRoot(MySQLParser::RootContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSql_statements(MySQLParser::Sql_statementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSql_statement(MySQLParser::Sql_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmpty_statement(MySQLParser::Empty_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDdl_statement(MySQLParser::Ddl_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDml_statement(MySQLParser::Dml_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransaction_statement(MySQLParser::Transaction_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplication_statement(MySQLParser::Replication_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrepared_statement(MySQLParser::Prepared_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompound_statement(MySQLParser::Compound_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdministration_statement(MySQLParser::Administration_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUtility_statement(MySQLParser::Utility_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_database(MySQLParser::Create_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_event(MySQLParser::Create_eventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_index(MySQLParser::Create_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_logfile_group(MySQLParser::Create_logfile_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_procedure(MySQLParser::Create_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_function(MySQLParser::Create_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_server(MySQLParser::Create_serverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopyCreateTable(MySQLParser::CopyCreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryCreateTable(MySQLParser::QueryCreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColCreateTable(MySQLParser::ColCreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_tablespace_innodb(MySQLParser::Create_tablespace_innodbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_tablespace_ndb(MySQLParser::Create_tablespace_ndbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_trigger(MySQLParser::Create_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_view(MySQLParser::Create_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_database_option(MySQLParser::Create_database_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOwner_statement(MySQLParser::Owner_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreciseSchedule(MySQLParser::PreciseScheduleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalSchedule(MySQLParser::IntervalScheduleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTimestamp_value(MySQLParser::Timestamp_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval_expr(MySQLParser::Interval_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval_type(MySQLParser::Interval_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_type(MySQLParser::Index_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_option(MySQLParser::Index_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProc_param(MySQLParser::Proc_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_param(MySQLParser::Func_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRcComment(MySQLParser::RcCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRcSqllang(MySQLParser::RcSqllangContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRcDeterm(MySQLParser::RcDetermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRcSqldata(MySQLParser::RcSqldataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRcSecurestmt(MySQLParser::RcSecurestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitServer_option(MySQLParser::Server_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_def_table_constraints(MySQLParser::Column_def_table_constraintsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnDefinition(MySQLParser::ColumnDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraintDefinition(MySQLParser::ConstraintDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexDefinition(MySQLParser::IndexDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_definition(MySQLParser::Column_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrNull(MySQLParser::ColConstrNullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrDflt(MySQLParser::ColConstrDfltContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrAuInc(MySQLParser::ColConstrAuIncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrPK(MySQLParser::ColConstrPKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrUK(MySQLParser::ColConstrUKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrComment(MySQLParser::ColConstrCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrForm(MySQLParser::ColConstrFormContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrStorage(MySQLParser::ColConstrStorageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrRefdef(MySQLParser::ColConstrRefdefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblConstrPK(MySQLParser::TblConstrPKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblConstrUK(MySQLParser::TblConstrUKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblConstrFK(MySQLParser::TblConstrFKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblConstCheck(MySQLParser::TblConstCheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReference_definition(MySQLParser::Reference_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOn_delete_action(MySQLParser::On_delete_actionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOn_update_action(MySQLParser::On_update_actionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReference_action_control_type(MySQLParser::Reference_action_control_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleIndex(MySQLParser::SimpleIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpecIndex(MySQLParser::SpecIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptEngine(MySQLParser::TblOptEngineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptAuInc(MySQLParser::TblOptAuIncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptAvgRLen(MySQLParser::TblOptAvgRLenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptDefCharSet(MySQLParser::TblOptDefCharSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptChkSum(MySQLParser::TblOptChkSumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptDefCollate(MySQLParser::TblOptDefCollateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptComment(MySQLParser::TblOptCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptCompr(MySQLParser::TblOptComprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptConn(MySQLParser::TblOptConnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptDataDir(MySQLParser::TblOptDataDirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptDelKW(MySQLParser::TblOptDelKWContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptEncr(MySQLParser::TblOptEncrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptIndexDir(MySQLParser::TblOptIndexDirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptInsMeth(MySQLParser::TblOptInsMethContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptKeyBlockSz(MySQLParser::TblOptKeyBlockSzContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptMaxRows(MySQLParser::TblOptMaxRowsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptMinRows(MySQLParser::TblOptMinRowsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptPackK(MySQLParser::TblOptPackKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptPasswd(MySQLParser::TblOptPasswdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptRowFormat(MySQLParser::TblOptRowFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptStatAutoR(MySQLParser::TblOptStatAutoRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptStatPersist(MySQLParser::TblOptStatPersistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptStatSamplPg(MySQLParser::TblOptStatSamplPgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptTablespace(MySQLParser::TblOptTablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptUnion(MySQLParser::TblOptUnionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_options(MySQLParser::Partition_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_function_definition(MySQLParser::Partition_function_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLinear_partition_func_def(MySQLParser::Linear_partition_func_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_def(MySQLParser::Partition_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubpartition_def(MySQLParser::Subpartition_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterDb(MySQLParser::AlterDbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterDbUpgradeName(MySQLParser::AlterDbUpgradeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_event(MySQLParser::Alter_eventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_function(MySQLParser::Alter_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_instance(MySQLParser::Alter_instanceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_logfile_group(MySQLParser::Alter_logfile_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_procedure(MySQLParser::Alter_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_server(MySQLParser::Alter_serverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table(MySQLParser::Alter_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_tablespace(MySQLParser::Alter_tablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_view(MySQLParser::Alter_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblTableOpt(MySQLParser::AltblTableOptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAddCol(MySQLParser::AltblAddColContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAddCols(MySQLParser::AltblAddColsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAddIndex(MySQLParser::AltblAddIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAddPK(MySQLParser::AltblAddPKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAddUK(MySQLParser::AltblAddUKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAddSpecIndex(MySQLParser::AltblAddSpecIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAddFK(MySQLParser::AltblAddFKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAlg(MySQLParser::AltblAlgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblColDef(MySQLParser::AltblColDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblColChange(MySQLParser::AltblColChangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblLock(MySQLParser::AltblLockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblColMod(MySQLParser::AltblColModContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblColDrop(MySQLParser::AltblColDropContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblDropPK(MySQLParser::AltblDropPKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblDropIndex(MySQLParser::AltblDropIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblDropFK(MySQLParser::AltblDropFKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblDisKey(MySQLParser::AltblDisKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblEnKey(MySQLParser::AltblEnKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblRenameTbl(MySQLParser::AltblRenameTblContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblResort(MySQLParser::AltblResortContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblConvert(MySQLParser::AltblConvertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblDefCharset(MySQLParser::AltblDefCharsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblDisTblspace(MySQLParser::AltblDisTblspaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblImpTblSpace(MySQLParser::AltblImpTblSpaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblForce(MySQLParser::AltblForceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblValid(MySQLParser::AltblValidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAddPart(MySQLParser::AltblAddPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblDropPart(MySQLParser::AltblDropPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblDiscartPart(MySQLParser::AltblDiscartPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblImportPart(MySQLParser::AltblImportPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblTruncPart(MySQLParser::AltblTruncPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblCoalPart(MySQLParser::AltblCoalPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblReorgPart(MySQLParser::AltblReorgPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblExchPart(MySQLParser::AltblExchPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAnalPart(MySQLParser::AltblAnalPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblCheckPart(MySQLParser::AltblCheckPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblOptimPart(MySQLParser::AltblOptimPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblRebuildPart(MySQLParser::AltblRebuildPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblRepairPart(MySQLParser::AltblRepairPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblRemovePart(MySQLParser::AltblRemovePartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblUpgrPart(MySQLParser::AltblUpgrPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_database(MySQLParser::Drop_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_event(MySQLParser::Drop_eventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_index(MySQLParser::Drop_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_logfile_group(MySQLParser::Drop_logfile_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_procedure(MySQLParser::Drop_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_function(MySQLParser::Drop_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_server(MySQLParser::Drop_serverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_table(MySQLParser::Drop_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_tablespace(MySQLParser::Drop_tablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_trigger(MySQLParser::Drop_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_view(MySQLParser::Drop_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRename_table(MySQLParser::Rename_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTruncate_table(MySQLParser::Truncate_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_statement(MySQLParser::Call_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelete_statement(MySQLParser::Delete_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDo_statement(MySQLParser::Do_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandler_statement(MySQLParser::Handler_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_statement(MySQLParser::Insert_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoad_data_statement(MySQLParser::Load_data_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoad_xml_statement(MySQLParser::Load_xml_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplace_statement(MySQLParser::Replace_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleSelect(MySQLParser::SimpleSelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenSelect(MySQLParser::ParenSelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnionSelect(MySQLParser::UnionSelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnionParenSelect(MySQLParser::UnionParenSelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_statement(MySQLParser::Update_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_statement_value(MySQLParser::Insert_statement_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_elem(MySQLParser::Update_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCol_or_uservar(MySQLParser::Col_or_uservarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_delete_statement(MySQLParser::Single_delete_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiple_delete_statement(MySQLParser::Multiple_delete_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandler_open_statement(MySQLParser::Handler_open_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandler_read_index_statement(MySQLParser::Handler_read_index_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandler_read_statement(MySQLParser::Handler_read_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandler_close_statement(MySQLParser::Handler_close_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_update_statement(MySQLParser::Single_update_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiple_update_statement(MySQLParser::Multiple_update_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by_clause(MySQLParser::Order_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by_expression(MySQLParser::Order_by_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_sources(MySQLParser::Table_sourcesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_source(MySQLParser::Table_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtomTableItem(MySQLParser::AtomTableItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubqueryTableItem(MySQLParser::SubqueryTableItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableSourcesItem(MySQLParser::TableSourcesItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_hint(MySQLParser::Index_hintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInnerJoin(MySQLParser::InnerJoinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStraightJoin(MySQLParser::StraightJoinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOuterJoin(MySQLParser::OuterJoinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNaturalJoin(MySQLParser::NaturalJoinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery(MySQLParser::SubqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_expression(MySQLParser::Query_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_expression_nointo(MySQLParser::Query_expression_nointoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_specification(MySQLParser::Query_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_specification_nointo(MySQLParser::Query_specification_nointoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnion_parenth(MySQLParser::Union_parenthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnion_statement(MySQLParser::Union_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_spec(MySQLParser::Select_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list(MySQLParser::Select_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSellistelAllCol(MySQLParser::SellistelAllColContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSellistelCol(MySQLParser::SellistelColContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSellistelFunc(MySQLParser::SellistelFuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSellistelExpr(MySQLParser::SellistelExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectIntoVars(MySQLParser::SelectIntoVarsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectIntoDump(MySQLParser::SelectIntoDumpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectIntoOutfile(MySQLParser::SelectIntoOutfileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_clause(MySQLParser::From_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroup_by_item(MySQLParser::Group_by_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimit_clause(MySQLParser::Limit_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart_transaction(MySQLParser::Start_transactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBegin_work(MySQLParser::Begin_workContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommit_work(MySQLParser::Commit_workContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRollback_work(MySQLParser::Rollback_workContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSavepoint_statement(MySQLParser::Savepoint_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRollback_statement(MySQLParser::Rollback_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelease_statement(MySQLParser::Release_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLock_tables(MySQLParser::Lock_tablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnlock_tables(MySQLParser::Unlock_tablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_autocommit_statement(MySQLParser::Set_autocommit_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_transaction_statement(MySQLParser::Set_transaction_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransact_option(MySQLParser::Transact_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLock_table_element(MySQLParser::Lock_table_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrans_characteristic(MySQLParser::Trans_characteristicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransaction_level(MySQLParser::Transaction_levelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChange_master(MySQLParser::Change_masterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChange_repl_filter(MySQLParser::Change_repl_filterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPurge_binary_logs(MySQLParser::Purge_binary_logsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReset_master(MySQLParser::Reset_masterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReset_slave(MySQLParser::Reset_slaveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart_slave(MySQLParser::Start_slaveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStop_slave(MySQLParser::Stop_slaveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart_group_repl(MySQLParser::Start_group_replContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStop_group_repl(MySQLParser::Stop_group_replContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterOptString(MySQLParser::MasterOptStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterOptDecimal(MySQLParser::MasterOptDecimalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterOptBool(MySQLParser::MasterOptBoolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterOptReal(MySQLParser::MasterOptRealContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterOptIdList(MySQLParser::MasterOptIdListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_master_option(MySQLParser::String_master_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimal_master_option(MySQLParser::Decimal_master_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_master_option(MySQLParser::Bool_master_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChannel_option(MySQLParser::Channel_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplfilterDbList(MySQLParser::ReplfilterDbListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplfilterTableList(MySQLParser::ReplfilterTableListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplfilterStableList(MySQLParser::ReplfilterStableListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplfilterTablepairList(MySQLParser::ReplfilterTablepairListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThread_type(MySQLParser::Thread_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntilGtidSset(MySQLParser::UntilGtidSsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntilMasterLog(MySQLParser::UntilMasterLogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntilRelayLog(MySQLParser::UntilRelayLogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntilSqlGaps(MySQLParser::UntilSqlGapsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart_slave_connection_option(MySQLParser::Start_slave_connection_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGtid_set(MySQLParser::Gtid_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXa_start_transaction(MySQLParser::Xa_start_transactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXa_end_transaction(MySQLParser::Xa_end_transactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXa_prepare(MySQLParser::Xa_prepareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXa_commit_work(MySQLParser::Xa_commit_workContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXa_rollback_work(MySQLParser::Xa_rollback_workContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXa_recover_work(MySQLParser::Xa_recover_workContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrepare_statement(MySQLParser::Prepare_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExecute_statement(MySQLParser::Execute_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeallocate_prepare(MySQLParser::Deallocate_prepareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutine_body(MySQLParser::Routine_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock_statement(MySQLParser::Block_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_statement(MySQLParser::Case_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_statement(MySQLParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIterate_statement(MySQLParser::Iterate_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeave_statement(MySQLParser::Leave_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoop_statement(MySQLParser::Loop_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeat_statement(MySQLParser::Repeat_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_statement(MySQLParser::Return_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_statement(MySQLParser::While_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_statement(MySQLParser::Cursor_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_variable(MySQLParser::Declare_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_condition(MySQLParser::Declare_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_cursor(MySQLParser::Declare_cursorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_handler(MySQLParser::Declare_handlerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandler_condition_value(MySQLParser::Handler_condition_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_sql_statement(MySQLParser::Procedure_sql_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterUserMysql56(MySQLParser::AlterUserMysql56Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterUserMysql57(MySQLParser::AlterUserMysql57Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateUserMysql56(MySQLParser::CreateUserMysql56Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateUserMysql57(MySQLParser::CreateUserMysql57Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_user(MySQLParser::Drop_userContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_statement(MySQLParser::Grant_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_proxy(MySQLParser::Grant_proxyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRename_user(MySQLParser::Rename_userContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDetailRevoke(MySQLParser::DetailRevokeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShortRevoke(MySQLParser::ShortRevokeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRevoke_proxy(MySQLParser::Revoke_proxyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_password_statement(MySQLParser::Set_password_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_password_option(MySQLParser::User_password_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAuthByPassword(MySQLParser::AuthByPasswordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAuthByString(MySQLParser::AuthByStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAuthByHash(MySQLParser::AuthByHashContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTls_option(MySQLParser::Tls_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_resource_option(MySQLParser::User_resource_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_lock_option(MySQLParser::User_lock_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivelege_clause(MySQLParser::Privelege_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivilege(MySQLParser::PrivilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivilege_level(MySQLParser::Privilege_levelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_password_option(MySQLParser::Set_password_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnalyze_table(MySQLParser::Analyze_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheck_table(MySQLParser::Check_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChecksum_table(MySQLParser::Checksum_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptimize_table(MySQLParser::Optimize_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepair_table(MySQLParser::Repair_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheck_table_option(MySQLParser::Check_table_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_udfunction(MySQLParser::Create_udfunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstall_plugin(MySQLParser::Install_pluginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUninstall_plugin(MySQLParser::Uninstall_pluginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetVariableAssignment(MySQLParser::SetVariableAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetCharset(MySQLParser::SetCharsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetNames(MySQLParser::SetNamesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetPasswordStatement(MySQLParser::SetPasswordStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetTransaction(MySQLParser::SetTransactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetAutocommit(MySQLParser::SetAutocommitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowMasterlogs(MySQLParser::ShowMasterlogsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowLogevents(MySQLParser::ShowLogeventsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowObjWithFilter(MySQLParser::ShowObjWithFilterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowColumns(MySQLParser::ShowColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateDb(MySQLParser::ShowCreateDbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateFullidobj(MySQLParser::ShowCreateFullidobjContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateUser(MySQLParser::ShowCreateUserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowEngine(MySQLParser::ShowEngineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowGlobalinfo(MySQLParser::ShowGlobalinfoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowErrWarn(MySQLParser::ShowErrWarnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCountErrWarn(MySQLParser::ShowCountErrWarnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowFromschemaFilter(MySQLParser::ShowFromschemaFilterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowRoutinecode(MySQLParser::ShowRoutinecodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowGrants(MySQLParser::ShowGrantsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowIndexes(MySQLParser::ShowIndexesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowOpentables(MySQLParser::ShowOpentablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowProfile(MySQLParser::ShowProfileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowSlavestatus(MySQLParser::ShowSlavestatusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_clause(MySQLParser::Variable_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShow_filter(MySQLParser::Show_filterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShow_profile_type(MySQLParser::Show_profile_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinlog_statement(MySQLParser::Binlog_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCache_index_statement(MySQLParser::Cache_index_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFlush_statement(MySQLParser::Flush_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKill_statement(MySQLParser::Kill_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoad_index_into_cache(MySQLParser::Load_index_into_cacheContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReset_statement(MySQLParser::Reset_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShutdown_statement(MySQLParser::Shutdown_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTbl_index_list(MySQLParser::Tbl_index_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFlush_option(MySQLParser::Flush_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoad_tbl_index_list(MySQLParser::Load_tbl_index_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_describe_statement(MySQLParser::Simple_describe_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFull_describe_statement(MySQLParser::Full_describe_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHelp_statement(MySQLParser::Help_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUse_statement(MySQLParser::Use_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescstmtDescObj(MySQLParser::DescstmtDescObjContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConnectionDescObj(MySQLParser::ConnectionDescObjContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_name(MySQLParser::Table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFull_id(MySQLParser::Full_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFull_column_name(MySQLParser::Full_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_col_name(MySQLParser::Index_col_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_name(MySQLParser::User_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMysql_variable(MySQLParser::Mysql_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharset_name(MySQLParser::Charset_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollation_name(MySQLParser::Collation_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEngine_name(MySQLParser::Engine_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUuid_set(MySQLParser::Uuid_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXid(MySQLParser::XidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXid_string_id(MySQLParser::Xid_string_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAuth_plugin(MySQLParser::Auth_pluginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId_(MySQLParser::Id_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_id(MySQLParser::Simple_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDot_ext_id(MySQLParser::Dot_ext_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimal_literal(MySQLParser::Decimal_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilesize_literal(MySQLParser::Filesize_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_literal(MySQLParser::String_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolean_literal(MySQLParser::Boolean_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHexadecimal_literal(MySQLParser::Hexadecimal_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNull_notnull(MySQLParser::Null_notnullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(MySQLParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharDatatype(MySQLParser::CharDatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDimensionDatatype(MySQLParser::DimensionDatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleDatatype(MySQLParser::SimpleDatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollectCharDatatype(MySQLParser::CollectCharDatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpatialDatatype(MySQLParser::SpatialDatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitData_type_to_convert(MySQLParser::Data_type_to_convertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpatial_data_type(MySQLParser::Spatial_data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLength_one_dimension(MySQLParser::Length_one_dimensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLength_two_dimension(MySQLParser::Length_two_dimensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLength_two_optional_dimension(MySQLParser::Length_two_optional_dimensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId_list(MySQLParser::Id_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_list(MySQLParser::Table_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_pair_list(MySQLParser::Table_pair_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_colname_list(MySQLParser::Index_colname_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_list(MySQLParser::Expression_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant_list(MySQLParser::Constant_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_string_list(MySQLParser::Simple_string_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_var_list(MySQLParser::User_var_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefault_value(MySQLParser::Default_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_exists(MySQLParser::If_existsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_not_exists(MySQLParser::If_not_existsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpecificFunctionCall(MySQLParser::SpecificFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregateFunctionCall(MySQLParser::AggregateFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScalarFunctionCall(MySQLParser::ScalarFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUdfFunctionCall(MySQLParser::UdfFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleSpecificFCall(MySQLParser::SimpleSpecificFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConvertDataTypeFCall(MySQLParser::ConvertDataTypeFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuesFCall(MySQLParser::ValuesFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseFCall(MySQLParser::CaseFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharFCall(MySQLParser::CharFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPositionFCall(MySQLParser::PositionFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubstrFCall(MySQLParser::SubstrFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrimFCall(MySQLParser::TrimFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWeightFCall(MySQLParser::WeightFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExtractFCall(MySQLParser::ExtractFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGetFormatFCall(MySQLParser::GetFormatFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLevelWeightFList(MySQLParser::LevelWeightFListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLevelWeightFRange(MySQLParser::LevelWeightFRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregate_windowed_function(MySQLParser::Aggregate_windowed_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScalar_function_name(MySQLParser::Scalar_function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_args(MySQLParser::Function_argsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_arg(MySQLParser::Function_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIsExpression(MySQLParser::IsExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotExpression(MySQLParser::NotExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalExpression(MySQLParser::LogicalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicateExpression(MySQLParser::PredicateExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSoundsLikePredicate(MySQLParser::SoundsLikePredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionAtomPredicate(MySQLParser::ExpressionAtomPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInPredicate(MySQLParser::InPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubqueryComparasionPredicate(MySQLParser::SubqueryComparasionPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBetweenPredicate(MySQLParser::BetweenPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryComparasionPredicate(MySQLParser::BinaryComparasionPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIsNullPredicate(MySQLParser::IsNullPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLikePredicate(MySQLParser::LikePredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRegexpPredicate(MySQLParser::RegexpPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpressionAtom(MySQLParser::UnaryExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExistsExpessionAtom(MySQLParser::ExistsExpessionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantExpressionAtom(MySQLParser::ConstantExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallExpressionAtom(MySQLParser::FunctionCallExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMysqlVariableExpressionAtom(MySQLParser::MysqlVariableExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryExpressionAtom(MySQLParser::BinaryExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullColumnNameExpressionAtom(MySQLParser::FullColumnNameExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultExpressionAtom(MySQLParser::DefaultExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitExpressionAtom(MySQLParser::BitExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNestedExpressionAtom(MySQLParser::NestedExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMathExpressionAtom(MySQLParser::MathExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalExpressionAtom(MySQLParser::IntervalExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_operator(MySQLParser::Unary_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparison_operator(MySQLParser::Comparison_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogical_operator(MySQLParser::Logical_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBit_operator(MySQLParser::Bit_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMath_operator(MySQLParser::Math_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharset_name_base(MySQLParser::Charset_name_baseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransaction_level_base(MySQLParser::Transaction_level_baseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivileges_base(MySQLParser::Privileges_baseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval_type_base(MySQLParser::Interval_type_baseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitData_type_base(MySQLParser::Data_type_baseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeywords_can_be_id(MySQLParser::Keywords_can_be_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_name_base(MySQLParser::Function_name_baseContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace parser

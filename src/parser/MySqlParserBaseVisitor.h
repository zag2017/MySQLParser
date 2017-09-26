
// Generated from MySqlParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MySqlParserVisitor.h"


namespace parser {

/**
 * This class provides an empty implementation of MySqlParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MySqlParserBaseVisitor : public MySqlParserVisitor {
public:

  virtual antlrcpp::Any visitRoot(MySqlParser::RootContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSql_statements(MySqlParser::Sql_statementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSql_statement(MySqlParser::Sql_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmpty_statement(MySqlParser::Empty_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDdl_statement(MySqlParser::Ddl_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDml_statement(MySqlParser::Dml_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransaction_statement(MySqlParser::Transaction_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplication_statement(MySqlParser::Replication_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrepared_statement(MySqlParser::Prepared_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompound_statement(MySqlParser::Compound_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdministration_statement(MySqlParser::Administration_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUtility_statement(MySqlParser::Utility_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_database(MySqlParser::Create_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_event(MySqlParser::Create_eventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_index(MySqlParser::Create_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_logfile_group(MySqlParser::Create_logfile_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_procedure(MySqlParser::Create_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_function(MySqlParser::Create_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_server(MySqlParser::Create_serverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCopyCreateTable(MySqlParser::CopyCreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryCreateTable(MySqlParser::QueryCreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColCreateTable(MySqlParser::ColCreateTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_tablespace_innodb(MySqlParser::Create_tablespace_innodbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_tablespace_ndb(MySqlParser::Create_tablespace_ndbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_trigger(MySqlParser::Create_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_view(MySqlParser::Create_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_database_option(MySqlParser::Create_database_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOwner_statement(MySqlParser::Owner_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreciseSchedule(MySqlParser::PreciseScheduleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalSchedule(MySqlParser::IntervalScheduleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTimestamp_value(MySqlParser::Timestamp_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval_expr(MySqlParser::Interval_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval_type(MySqlParser::Interval_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_type(MySqlParser::Index_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_option(MySqlParser::Index_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProc_param(MySqlParser::Proc_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_param(MySqlParser::Func_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRcComment(MySqlParser::RcCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRcSqllang(MySqlParser::RcSqllangContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRcDeterm(MySqlParser::RcDetermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRcSqldata(MySqlParser::RcSqldataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRcSecurestmt(MySqlParser::RcSecurestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitServer_option(MySqlParser::Server_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_def_table_constraints(MySqlParser::Column_def_table_constraintsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnDefinition(MySqlParser::ColumnDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstraintDefinition(MySqlParser::ConstraintDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexDefinition(MySqlParser::IndexDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumn_definition(MySqlParser::Column_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrNull(MySqlParser::ColConstrNullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrDflt(MySqlParser::ColConstrDfltContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrAuInc(MySqlParser::ColConstrAuIncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrPK(MySqlParser::ColConstrPKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrUK(MySqlParser::ColConstrUKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrComment(MySqlParser::ColConstrCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrForm(MySqlParser::ColConstrFormContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrStorage(MySqlParser::ColConstrStorageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColConstrRefdef(MySqlParser::ColConstrRefdefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblConstrPK(MySqlParser::TblConstrPKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblConstrUK(MySqlParser::TblConstrUKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblConstrFK(MySqlParser::TblConstrFKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblConstCheck(MySqlParser::TblConstCheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReference_definition(MySqlParser::Reference_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOn_delete_action(MySqlParser::On_delete_actionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOn_update_action(MySqlParser::On_update_actionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReference_action_control_type(MySqlParser::Reference_action_control_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleIndex(MySqlParser::SimpleIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpecIndex(MySqlParser::SpecIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptEngine(MySqlParser::TblOptEngineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptAuInc(MySqlParser::TblOptAuIncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptAvgRLen(MySqlParser::TblOptAvgRLenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptDefCharSet(MySqlParser::TblOptDefCharSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptChkSum(MySqlParser::TblOptChkSumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptDefCollate(MySqlParser::TblOptDefCollateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptComment(MySqlParser::TblOptCommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptCompr(MySqlParser::TblOptComprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptConn(MySqlParser::TblOptConnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptDataDir(MySqlParser::TblOptDataDirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptDelKW(MySqlParser::TblOptDelKWContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptEncr(MySqlParser::TblOptEncrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptIndexDir(MySqlParser::TblOptIndexDirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptInsMeth(MySqlParser::TblOptInsMethContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptKeyBlockSz(MySqlParser::TblOptKeyBlockSzContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptMaxRows(MySqlParser::TblOptMaxRowsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptMinRows(MySqlParser::TblOptMinRowsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptPackK(MySqlParser::TblOptPackKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptPasswd(MySqlParser::TblOptPasswdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptRowFormat(MySqlParser::TblOptRowFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptStatAutoR(MySqlParser::TblOptStatAutoRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptStatPersist(MySqlParser::TblOptStatPersistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptStatSamplPg(MySqlParser::TblOptStatSamplPgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptTablespace(MySqlParser::TblOptTablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTblOptUnion(MySqlParser::TblOptUnionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_options(MySqlParser::Partition_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_function_definition(MySqlParser::Partition_function_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLinear_partition_func_def(MySqlParser::Linear_partition_func_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPartition_def(MySqlParser::Partition_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubpartition_def(MySqlParser::Subpartition_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterDb(MySqlParser::AlterDbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterDbUpgradeName(MySqlParser::AlterDbUpgradeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_event(MySqlParser::Alter_eventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_function(MySqlParser::Alter_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_instance(MySqlParser::Alter_instanceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_logfile_group(MySqlParser::Alter_logfile_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_procedure(MySqlParser::Alter_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_server(MySqlParser::Alter_serverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_table(MySqlParser::Alter_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_tablespace(MySqlParser::Alter_tablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlter_view(MySqlParser::Alter_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblTableOpt(MySqlParser::AltblTableOptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAddCol(MySqlParser::AltblAddColContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAddCols(MySqlParser::AltblAddColsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAddIndex(MySqlParser::AltblAddIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAddPK(MySqlParser::AltblAddPKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAddUK(MySqlParser::AltblAddUKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAddSpecIndex(MySqlParser::AltblAddSpecIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAddFK(MySqlParser::AltblAddFKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAlg(MySqlParser::AltblAlgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblColDef(MySqlParser::AltblColDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblColChange(MySqlParser::AltblColChangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblLock(MySqlParser::AltblLockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblColMod(MySqlParser::AltblColModContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblColDrop(MySqlParser::AltblColDropContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblDropPK(MySqlParser::AltblDropPKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblDropIndex(MySqlParser::AltblDropIndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblDropFK(MySqlParser::AltblDropFKContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblDisKey(MySqlParser::AltblDisKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblEnKey(MySqlParser::AltblEnKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblRenameTbl(MySqlParser::AltblRenameTblContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblResort(MySqlParser::AltblResortContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblConvert(MySqlParser::AltblConvertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblDefCharset(MySqlParser::AltblDefCharsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblDisTblspace(MySqlParser::AltblDisTblspaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblImpTblSpace(MySqlParser::AltblImpTblSpaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblForce(MySqlParser::AltblForceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblValid(MySqlParser::AltblValidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAddPart(MySqlParser::AltblAddPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblDropPart(MySqlParser::AltblDropPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblDiscartPart(MySqlParser::AltblDiscartPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblImportPart(MySqlParser::AltblImportPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblTruncPart(MySqlParser::AltblTruncPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblCoalPart(MySqlParser::AltblCoalPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblReorgPart(MySqlParser::AltblReorgPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblExchPart(MySqlParser::AltblExchPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblAnalPart(MySqlParser::AltblAnalPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblCheckPart(MySqlParser::AltblCheckPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblOptimPart(MySqlParser::AltblOptimPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblRebuildPart(MySqlParser::AltblRebuildPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblRepairPart(MySqlParser::AltblRepairPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblRemovePart(MySqlParser::AltblRemovePartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAltblUpgrPart(MySqlParser::AltblUpgrPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_database(MySqlParser::Drop_databaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_event(MySqlParser::Drop_eventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_index(MySqlParser::Drop_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_logfile_group(MySqlParser::Drop_logfile_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_procedure(MySqlParser::Drop_procedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_function(MySqlParser::Drop_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_server(MySqlParser::Drop_serverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_table(MySqlParser::Drop_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_tablespace(MySqlParser::Drop_tablespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_trigger(MySqlParser::Drop_triggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_view(MySqlParser::Drop_viewContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRename_table(MySqlParser::Rename_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTruncate_table(MySqlParser::Truncate_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_statement(MySqlParser::Call_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDelete_statement(MySqlParser::Delete_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDo_statement(MySqlParser::Do_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandler_statement(MySqlParser::Handler_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_statement(MySqlParser::Insert_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoad_data_statement(MySqlParser::Load_data_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoad_xml_statement(MySqlParser::Load_xml_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplace_statement(MySqlParser::Replace_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleSelect(MySqlParser::SimpleSelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenSelect(MySqlParser::ParenSelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnionSelect(MySqlParser::UnionSelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnionParenSelect(MySqlParser::UnionParenSelectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_statement(MySqlParser::Update_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsert_statement_value(MySqlParser::Insert_statement_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUpdate_elem(MySqlParser::Update_elemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCol_or_uservar(MySqlParser::Col_or_uservarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_delete_statement(MySqlParser::Single_delete_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiple_delete_statement(MySqlParser::Multiple_delete_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandler_open_statement(MySqlParser::Handler_open_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandler_read_index_statement(MySqlParser::Handler_read_index_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandler_read_statement(MySqlParser::Handler_read_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandler_close_statement(MySqlParser::Handler_close_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_update_statement(MySqlParser::Single_update_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiple_update_statement(MySqlParser::Multiple_update_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by_clause(MySqlParser::Order_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrder_by_expression(MySqlParser::Order_by_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_sources(MySqlParser::Table_sourcesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_source(MySqlParser::Table_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtomTableItem(MySqlParser::AtomTableItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubqueryTableItem(MySqlParser::SubqueryTableItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableSourcesItem(MySqlParser::TableSourcesItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_hint(MySqlParser::Index_hintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInnerJoin(MySqlParser::InnerJoinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStraightJoin(MySqlParser::StraightJoinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOuterJoin(MySqlParser::OuterJoinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNaturalJoin(MySqlParser::NaturalJoinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubquery(MySqlParser::SubqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_expression(MySqlParser::Query_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_expression_nointo(MySqlParser::Query_expression_nointoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_specification(MySqlParser::Query_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuery_specification_nointo(MySqlParser::Query_specification_nointoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnion_parenth(MySqlParser::Union_parenthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnion_statement(MySqlParser::Union_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_spec(MySqlParser::Select_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelect_list(MySqlParser::Select_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSellistelAllCol(MySqlParser::SellistelAllColContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSellistelCol(MySqlParser::SellistelColContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSellistelFunc(MySqlParser::SellistelFuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSellistelExpr(MySqlParser::SellistelExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectIntoVars(MySqlParser::SelectIntoVarsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectIntoDump(MySqlParser::SelectIntoDumpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectIntoOutfile(MySqlParser::SelectIntoOutfileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrom_clause(MySqlParser::From_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGroup_by_item(MySqlParser::Group_by_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimit_clause(MySqlParser::Limit_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart_transaction(MySqlParser::Start_transactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBegin_work(MySqlParser::Begin_workContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommit_work(MySqlParser::Commit_workContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRollback_work(MySqlParser::Rollback_workContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSavepoint_statement(MySqlParser::Savepoint_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRollback_statement(MySqlParser::Rollback_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelease_statement(MySqlParser::Release_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLock_tables(MySqlParser::Lock_tablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnlock_tables(MySqlParser::Unlock_tablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_autocommit_statement(MySqlParser::Set_autocommit_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_transaction_statement(MySqlParser::Set_transaction_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransact_option(MySqlParser::Transact_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLock_table_element(MySqlParser::Lock_table_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrans_characteristic(MySqlParser::Trans_characteristicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransaction_level(MySqlParser::Transaction_levelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChange_master(MySqlParser::Change_masterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChange_repl_filter(MySqlParser::Change_repl_filterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPurge_binary_logs(MySqlParser::Purge_binary_logsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReset_master(MySqlParser::Reset_masterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReset_slave(MySqlParser::Reset_slaveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart_slave(MySqlParser::Start_slaveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStop_slave(MySqlParser::Stop_slaveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart_group_repl(MySqlParser::Start_group_replContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStop_group_repl(MySqlParser::Stop_group_replContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterOptString(MySqlParser::MasterOptStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterOptDecimal(MySqlParser::MasterOptDecimalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterOptBool(MySqlParser::MasterOptBoolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterOptReal(MySqlParser::MasterOptRealContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMasterOptIdList(MySqlParser::MasterOptIdListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_master_option(MySqlParser::String_master_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimal_master_option(MySqlParser::Decimal_master_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBool_master_option(MySqlParser::Bool_master_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChannel_option(MySqlParser::Channel_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplfilterDbList(MySqlParser::ReplfilterDbListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplfilterTableList(MySqlParser::ReplfilterTableListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplfilterStableList(MySqlParser::ReplfilterStableListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplfilterTablepairList(MySqlParser::ReplfilterTablepairListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThread_type(MySqlParser::Thread_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntilGtidSset(MySqlParser::UntilGtidSsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntilMasterLog(MySqlParser::UntilMasterLogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntilRelayLog(MySqlParser::UntilRelayLogContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntilSqlGaps(MySqlParser::UntilSqlGapsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart_slave_connection_option(MySqlParser::Start_slave_connection_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGtid_set(MySqlParser::Gtid_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXa_start_transaction(MySqlParser::Xa_start_transactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXa_end_transaction(MySqlParser::Xa_end_transactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXa_prepare(MySqlParser::Xa_prepareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXa_commit_work(MySqlParser::Xa_commit_workContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXa_rollback_work(MySqlParser::Xa_rollback_workContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXa_recover_work(MySqlParser::Xa_recover_workContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrepare_statement(MySqlParser::Prepare_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExecute_statement(MySqlParser::Execute_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeallocate_prepare(MySqlParser::Deallocate_prepareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutine_body(MySqlParser::Routine_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock_statement(MySqlParser::Block_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCase_statement(MySqlParser::Case_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_statement(MySqlParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIterate_statement(MySqlParser::Iterate_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeave_statement(MySqlParser::Leave_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoop_statement(MySqlParser::Loop_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeat_statement(MySqlParser::Repeat_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_statement(MySqlParser::Return_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_statement(MySqlParser::While_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCursor_statement(MySqlParser::Cursor_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_variable(MySqlParser::Declare_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_condition(MySqlParser::Declare_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_cursor(MySqlParser::Declare_cursorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclare_handler(MySqlParser::Declare_handlerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandler_condition_value(MySqlParser::Handler_condition_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedure_sql_statement(MySqlParser::Procedure_sql_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterUserMysql56(MySqlParser::AlterUserMysql56Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlterUserMysql57(MySqlParser::AlterUserMysql57Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateUserMysql56(MySqlParser::CreateUserMysql56Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateUserMysql57(MySqlParser::CreateUserMysql57Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrop_user(MySqlParser::Drop_userContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_statement(MySqlParser::Grant_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGrant_proxy(MySqlParser::Grant_proxyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRename_user(MySqlParser::Rename_userContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDetailRevoke(MySqlParser::DetailRevokeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShortRevoke(MySqlParser::ShortRevokeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRevoke_proxy(MySqlParser::Revoke_proxyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_password_statement(MySqlParser::Set_password_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_password_option(MySqlParser::User_password_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAuthByPassword(MySqlParser::AuthByPasswordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAuthByString(MySqlParser::AuthByStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAuthByHash(MySqlParser::AuthByHashContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTls_option(MySqlParser::Tls_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_resource_option(MySqlParser::User_resource_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_lock_option(MySqlParser::User_lock_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivelege_clause(MySqlParser::Privelege_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivilege(MySqlParser::PrivilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivilege_level(MySqlParser::Privilege_levelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSet_password_option(MySqlParser::Set_password_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnalyze_table(MySqlParser::Analyze_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheck_table(MySqlParser::Check_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChecksum_table(MySqlParser::Checksum_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptimize_table(MySqlParser::Optimize_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepair_table(MySqlParser::Repair_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCheck_table_option(MySqlParser::Check_table_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate_udfunction(MySqlParser::Create_udfunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstall_plugin(MySqlParser::Install_pluginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUninstall_plugin(MySqlParser::Uninstall_pluginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetVariableAssignment(MySqlParser::SetVariableAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetCharset(MySqlParser::SetCharsetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetNames(MySqlParser::SetNamesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetPasswordStatement(MySqlParser::SetPasswordStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetTransaction(MySqlParser::SetTransactionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetAutocommit(MySqlParser::SetAutocommitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowMasterlogs(MySqlParser::ShowMasterlogsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowLogevents(MySqlParser::ShowLogeventsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowObjWithFilter(MySqlParser::ShowObjWithFilterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowColumns(MySqlParser::ShowColumnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateDb(MySqlParser::ShowCreateDbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateFullidobj(MySqlParser::ShowCreateFullidobjContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCreateUser(MySqlParser::ShowCreateUserContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowEngine(MySqlParser::ShowEngineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowGlobalinfo(MySqlParser::ShowGlobalinfoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowErrWarn(MySqlParser::ShowErrWarnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowCountErrWarn(MySqlParser::ShowCountErrWarnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowFromschemaFilter(MySqlParser::ShowFromschemaFilterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowRoutinecode(MySqlParser::ShowRoutinecodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowGrants(MySqlParser::ShowGrantsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowIndexes(MySqlParser::ShowIndexesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowOpentables(MySqlParser::ShowOpentablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowProfile(MySqlParser::ShowProfileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShowSlavestatus(MySqlParser::ShowSlavestatusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable_clause(MySqlParser::Variable_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShow_filter(MySqlParser::Show_filterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShow_profile_type(MySqlParser::Show_profile_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinlog_statement(MySqlParser::Binlog_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCache_index_statement(MySqlParser::Cache_index_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFlush_statement(MySqlParser::Flush_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKill_statement(MySqlParser::Kill_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoad_index_into_cache(MySqlParser::Load_index_into_cacheContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReset_statement(MySqlParser::Reset_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShutdown_statement(MySqlParser::Shutdown_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTbl_index_list(MySqlParser::Tbl_index_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFlush_option(MySqlParser::Flush_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoad_tbl_index_list(MySqlParser::Load_tbl_index_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_describe_statement(MySqlParser::Simple_describe_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFull_describe_statement(MySqlParser::Full_describe_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHelp_statement(MySqlParser::Help_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUse_statement(MySqlParser::Use_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescstmtDescObj(MySqlParser::DescstmtDescObjContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConnectionDescObj(MySqlParser::ConnectionDescObjContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_name(MySqlParser::Table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFull_id(MySqlParser::Full_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFull_column_name(MySqlParser::Full_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_col_name(MySqlParser::Index_col_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_name(MySqlParser::User_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMysql_variable(MySqlParser::Mysql_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharset_name(MySqlParser::Charset_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollation_name(MySqlParser::Collation_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEngine_name(MySqlParser::Engine_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUuid_set(MySqlParser::Uuid_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXid(MySqlParser::XidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXid_string_id(MySqlParser::Xid_string_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAuth_plugin(MySqlParser::Auth_pluginContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId_(MySqlParser::Id_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_id(MySqlParser::Simple_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDot_ext_id(MySqlParser::Dot_ext_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimal_literal(MySqlParser::Decimal_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFilesize_literal(MySqlParser::Filesize_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_literal(MySqlParser::String_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolean_literal(MySqlParser::Boolean_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHexadecimal_literal(MySqlParser::Hexadecimal_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNull_notnull(MySqlParser::Null_notnullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(MySqlParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharDatatype(MySqlParser::CharDatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDimensionDatatype(MySqlParser::DimensionDatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleDatatype(MySqlParser::SimpleDatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollectCharDatatype(MySqlParser::CollectCharDatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpatialDatatype(MySqlParser::SpatialDatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitData_type_to_convert(MySqlParser::Data_type_to_convertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpatial_data_type(MySqlParser::Spatial_data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLength_one_dimension(MySqlParser::Length_one_dimensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLength_two_dimension(MySqlParser::Length_two_dimensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLength_two_optional_dimension(MySqlParser::Length_two_optional_dimensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitId_list(MySqlParser::Id_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_list(MySqlParser::Table_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTable_pair_list(MySqlParser::Table_pair_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex_colname_list(MySqlParser::Index_colname_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression_list(MySqlParser::Expression_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant_list(MySqlParser::Constant_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimple_string_list(MySqlParser::Simple_string_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUser_var_list(MySqlParser::User_var_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefault_value(MySqlParser::Default_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_exists(MySqlParser::If_existsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_not_exists(MySqlParser::If_not_existsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpecificFunctionCall(MySqlParser::SpecificFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregateFunctionCall(MySqlParser::AggregateFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScalarFunctionCall(MySqlParser::ScalarFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUdfFunctionCall(MySqlParser::UdfFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleSpecificFCall(MySqlParser::SimpleSpecificFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConvertDataTypeFCall(MySqlParser::ConvertDataTypeFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValuesFCall(MySqlParser::ValuesFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseFCall(MySqlParser::CaseFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharFCall(MySqlParser::CharFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPositionFCall(MySqlParser::PositionFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubstrFCall(MySqlParser::SubstrFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrimFCall(MySqlParser::TrimFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWeightFCall(MySqlParser::WeightFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExtractFCall(MySqlParser::ExtractFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGetFormatFCall(MySqlParser::GetFormatFCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLevelWeightFList(MySqlParser::LevelWeightFListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLevelWeightFRange(MySqlParser::LevelWeightFRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAggregate_windowed_function(MySqlParser::Aggregate_windowed_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScalar_function_name(MySqlParser::Scalar_function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_args(MySqlParser::Function_argsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_arg(MySqlParser::Function_argContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIsExpression(MySqlParser::IsExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotExpression(MySqlParser::NotExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalExpression(MySqlParser::LogicalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicateExpression(MySqlParser::PredicateExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSoundsLikePredicate(MySqlParser::SoundsLikePredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionAtomPredicate(MySqlParser::ExpressionAtomPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInPredicate(MySqlParser::InPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubqueryComparasionPredicate(MySqlParser::SubqueryComparasionPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBetweenPredicate(MySqlParser::BetweenPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryComparasionPredicate(MySqlParser::BinaryComparasionPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIsNullPredicate(MySqlParser::IsNullPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLikePredicate(MySqlParser::LikePredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRegexpPredicate(MySqlParser::RegexpPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpressionAtom(MySqlParser::UnaryExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExistsExpessionAtom(MySqlParser::ExistsExpessionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantExpressionAtom(MySqlParser::ConstantExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallExpressionAtom(MySqlParser::FunctionCallExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMysqlVariableExpressionAtom(MySqlParser::MysqlVariableExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryExpressionAtom(MySqlParser::BinaryExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullColumnNameExpressionAtom(MySqlParser::FullColumnNameExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultExpressionAtom(MySqlParser::DefaultExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitExpressionAtom(MySqlParser::BitExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNestedExpressionAtom(MySqlParser::NestedExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMathExpressionAtom(MySqlParser::MathExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntervalExpressionAtom(MySqlParser::IntervalExpressionAtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_operator(MySqlParser::Unary_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparison_operator(MySqlParser::Comparison_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogical_operator(MySqlParser::Logical_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBit_operator(MySqlParser::Bit_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMath_operator(MySqlParser::Math_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharset_name_base(MySqlParser::Charset_name_baseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTransaction_level_base(MySqlParser::Transaction_level_baseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrivileges_base(MySqlParser::Privileges_baseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterval_type_base(MySqlParser::Interval_type_baseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitData_type_base(MySqlParser::Data_type_baseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeywords_can_be_id(MySqlParser::Keywords_can_be_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_name_base(MySqlParser::Function_name_baseContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace parser

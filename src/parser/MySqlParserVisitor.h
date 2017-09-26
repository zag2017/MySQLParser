
// Generated from MySqlParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MySqlParser.h"


namespace parser {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by MySqlParser.
 */
class  MySqlParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MySqlParser.
   */
    virtual antlrcpp::Any visitRoot(MySqlParser::RootContext *context) = 0;

    virtual antlrcpp::Any visitSql_statements(MySqlParser::Sql_statementsContext *context) = 0;

    virtual antlrcpp::Any visitSql_statement(MySqlParser::Sql_statementContext *context) = 0;

    virtual antlrcpp::Any visitEmpty_statement(MySqlParser::Empty_statementContext *context) = 0;

    virtual antlrcpp::Any visitDdl_statement(MySqlParser::Ddl_statementContext *context) = 0;

    virtual antlrcpp::Any visitDml_statement(MySqlParser::Dml_statementContext *context) = 0;

    virtual antlrcpp::Any visitTransaction_statement(MySqlParser::Transaction_statementContext *context) = 0;

    virtual antlrcpp::Any visitReplication_statement(MySqlParser::Replication_statementContext *context) = 0;

    virtual antlrcpp::Any visitPrepared_statement(MySqlParser::Prepared_statementContext *context) = 0;

    virtual antlrcpp::Any visitCompound_statement(MySqlParser::Compound_statementContext *context) = 0;

    virtual antlrcpp::Any visitAdministration_statement(MySqlParser::Administration_statementContext *context) = 0;

    virtual antlrcpp::Any visitUtility_statement(MySqlParser::Utility_statementContext *context) = 0;

    virtual antlrcpp::Any visitCreate_database(MySqlParser::Create_databaseContext *context) = 0;

    virtual antlrcpp::Any visitCreate_event(MySqlParser::Create_eventContext *context) = 0;

    virtual antlrcpp::Any visitCreate_index(MySqlParser::Create_indexContext *context) = 0;

    virtual antlrcpp::Any visitCreate_logfile_group(MySqlParser::Create_logfile_groupContext *context) = 0;

    virtual antlrcpp::Any visitCreate_procedure(MySqlParser::Create_procedureContext *context) = 0;

    virtual antlrcpp::Any visitCreate_function(MySqlParser::Create_functionContext *context) = 0;

    virtual antlrcpp::Any visitCreate_server(MySqlParser::Create_serverContext *context) = 0;

    virtual antlrcpp::Any visitCopyCreateTable(MySqlParser::CopyCreateTableContext *context) = 0;

    virtual antlrcpp::Any visitQueryCreateTable(MySqlParser::QueryCreateTableContext *context) = 0;

    virtual antlrcpp::Any visitColCreateTable(MySqlParser::ColCreateTableContext *context) = 0;

    virtual antlrcpp::Any visitCreate_tablespace_innodb(MySqlParser::Create_tablespace_innodbContext *context) = 0;

    virtual antlrcpp::Any visitCreate_tablespace_ndb(MySqlParser::Create_tablespace_ndbContext *context) = 0;

    virtual antlrcpp::Any visitCreate_trigger(MySqlParser::Create_triggerContext *context) = 0;

    virtual antlrcpp::Any visitCreate_view(MySqlParser::Create_viewContext *context) = 0;

    virtual antlrcpp::Any visitCreate_database_option(MySqlParser::Create_database_optionContext *context) = 0;

    virtual antlrcpp::Any visitOwner_statement(MySqlParser::Owner_statementContext *context) = 0;

    virtual antlrcpp::Any visitPreciseSchedule(MySqlParser::PreciseScheduleContext *context) = 0;

    virtual antlrcpp::Any visitIntervalSchedule(MySqlParser::IntervalScheduleContext *context) = 0;

    virtual antlrcpp::Any visitTimestamp_value(MySqlParser::Timestamp_valueContext *context) = 0;

    virtual antlrcpp::Any visitInterval_expr(MySqlParser::Interval_exprContext *context) = 0;

    virtual antlrcpp::Any visitInterval_type(MySqlParser::Interval_typeContext *context) = 0;

    virtual antlrcpp::Any visitIndex_type(MySqlParser::Index_typeContext *context) = 0;

    virtual antlrcpp::Any visitIndex_option(MySqlParser::Index_optionContext *context) = 0;

    virtual antlrcpp::Any visitProc_param(MySqlParser::Proc_paramContext *context) = 0;

    virtual antlrcpp::Any visitFunc_param(MySqlParser::Func_paramContext *context) = 0;

    virtual antlrcpp::Any visitRcComment(MySqlParser::RcCommentContext *context) = 0;

    virtual antlrcpp::Any visitRcSqllang(MySqlParser::RcSqllangContext *context) = 0;

    virtual antlrcpp::Any visitRcDeterm(MySqlParser::RcDetermContext *context) = 0;

    virtual antlrcpp::Any visitRcSqldata(MySqlParser::RcSqldataContext *context) = 0;

    virtual antlrcpp::Any visitRcSecurestmt(MySqlParser::RcSecurestmtContext *context) = 0;

    virtual antlrcpp::Any visitServer_option(MySqlParser::Server_optionContext *context) = 0;

    virtual antlrcpp::Any visitColumn_def_table_constraints(MySqlParser::Column_def_table_constraintsContext *context) = 0;

    virtual antlrcpp::Any visitColumnDefinition(MySqlParser::ColumnDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitConstraintDefinition(MySqlParser::ConstraintDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitIndexDefinition(MySqlParser::IndexDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitColumn_definition(MySqlParser::Column_definitionContext *context) = 0;

    virtual antlrcpp::Any visitColConstrNull(MySqlParser::ColConstrNullContext *context) = 0;

    virtual antlrcpp::Any visitColConstrDflt(MySqlParser::ColConstrDfltContext *context) = 0;

    virtual antlrcpp::Any visitColConstrAuInc(MySqlParser::ColConstrAuIncContext *context) = 0;

    virtual antlrcpp::Any visitColConstrPK(MySqlParser::ColConstrPKContext *context) = 0;

    virtual antlrcpp::Any visitColConstrUK(MySqlParser::ColConstrUKContext *context) = 0;

    virtual antlrcpp::Any visitColConstrComment(MySqlParser::ColConstrCommentContext *context) = 0;

    virtual antlrcpp::Any visitColConstrForm(MySqlParser::ColConstrFormContext *context) = 0;

    virtual antlrcpp::Any visitColConstrStorage(MySqlParser::ColConstrStorageContext *context) = 0;

    virtual antlrcpp::Any visitColConstrRefdef(MySqlParser::ColConstrRefdefContext *context) = 0;

    virtual antlrcpp::Any visitTblConstrPK(MySqlParser::TblConstrPKContext *context) = 0;

    virtual antlrcpp::Any visitTblConstrUK(MySqlParser::TblConstrUKContext *context) = 0;

    virtual antlrcpp::Any visitTblConstrFK(MySqlParser::TblConstrFKContext *context) = 0;

    virtual antlrcpp::Any visitTblConstCheck(MySqlParser::TblConstCheckContext *context) = 0;

    virtual antlrcpp::Any visitReference_definition(MySqlParser::Reference_definitionContext *context) = 0;

    virtual antlrcpp::Any visitOn_delete_action(MySqlParser::On_delete_actionContext *context) = 0;

    virtual antlrcpp::Any visitOn_update_action(MySqlParser::On_update_actionContext *context) = 0;

    virtual antlrcpp::Any visitReference_action_control_type(MySqlParser::Reference_action_control_typeContext *context) = 0;

    virtual antlrcpp::Any visitSimpleIndex(MySqlParser::SimpleIndexContext *context) = 0;

    virtual antlrcpp::Any visitSpecIndex(MySqlParser::SpecIndexContext *context) = 0;

    virtual antlrcpp::Any visitTblOptEngine(MySqlParser::TblOptEngineContext *context) = 0;

    virtual antlrcpp::Any visitTblOptAuInc(MySqlParser::TblOptAuIncContext *context) = 0;

    virtual antlrcpp::Any visitTblOptAvgRLen(MySqlParser::TblOptAvgRLenContext *context) = 0;

    virtual antlrcpp::Any visitTblOptDefCharSet(MySqlParser::TblOptDefCharSetContext *context) = 0;

    virtual antlrcpp::Any visitTblOptChkSum(MySqlParser::TblOptChkSumContext *context) = 0;

    virtual antlrcpp::Any visitTblOptDefCollate(MySqlParser::TblOptDefCollateContext *context) = 0;

    virtual antlrcpp::Any visitTblOptComment(MySqlParser::TblOptCommentContext *context) = 0;

    virtual antlrcpp::Any visitTblOptCompr(MySqlParser::TblOptComprContext *context) = 0;

    virtual antlrcpp::Any visitTblOptConn(MySqlParser::TblOptConnContext *context) = 0;

    virtual antlrcpp::Any visitTblOptDataDir(MySqlParser::TblOptDataDirContext *context) = 0;

    virtual antlrcpp::Any visitTblOptDelKW(MySqlParser::TblOptDelKWContext *context) = 0;

    virtual antlrcpp::Any visitTblOptEncr(MySqlParser::TblOptEncrContext *context) = 0;

    virtual antlrcpp::Any visitTblOptIndexDir(MySqlParser::TblOptIndexDirContext *context) = 0;

    virtual antlrcpp::Any visitTblOptInsMeth(MySqlParser::TblOptInsMethContext *context) = 0;

    virtual antlrcpp::Any visitTblOptKeyBlockSz(MySqlParser::TblOptKeyBlockSzContext *context) = 0;

    virtual antlrcpp::Any visitTblOptMaxRows(MySqlParser::TblOptMaxRowsContext *context) = 0;

    virtual antlrcpp::Any visitTblOptMinRows(MySqlParser::TblOptMinRowsContext *context) = 0;

    virtual antlrcpp::Any visitTblOptPackK(MySqlParser::TblOptPackKContext *context) = 0;

    virtual antlrcpp::Any visitTblOptPasswd(MySqlParser::TblOptPasswdContext *context) = 0;

    virtual antlrcpp::Any visitTblOptRowFormat(MySqlParser::TblOptRowFormatContext *context) = 0;

    virtual antlrcpp::Any visitTblOptStatAutoR(MySqlParser::TblOptStatAutoRContext *context) = 0;

    virtual antlrcpp::Any visitTblOptStatPersist(MySqlParser::TblOptStatPersistContext *context) = 0;

    virtual antlrcpp::Any visitTblOptStatSamplPg(MySqlParser::TblOptStatSamplPgContext *context) = 0;

    virtual antlrcpp::Any visitTblOptTablespace(MySqlParser::TblOptTablespaceContext *context) = 0;

    virtual antlrcpp::Any visitTblOptUnion(MySqlParser::TblOptUnionContext *context) = 0;

    virtual antlrcpp::Any visitPartition_options(MySqlParser::Partition_optionsContext *context) = 0;

    virtual antlrcpp::Any visitPartition_function_definition(MySqlParser::Partition_function_definitionContext *context) = 0;

    virtual antlrcpp::Any visitLinear_partition_func_def(MySqlParser::Linear_partition_func_defContext *context) = 0;

    virtual antlrcpp::Any visitPartition_def(MySqlParser::Partition_defContext *context) = 0;

    virtual antlrcpp::Any visitSubpartition_def(MySqlParser::Subpartition_defContext *context) = 0;

    virtual antlrcpp::Any visitAlterDb(MySqlParser::AlterDbContext *context) = 0;

    virtual antlrcpp::Any visitAlterDbUpgradeName(MySqlParser::AlterDbUpgradeNameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_event(MySqlParser::Alter_eventContext *context) = 0;

    virtual antlrcpp::Any visitAlter_function(MySqlParser::Alter_functionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_instance(MySqlParser::Alter_instanceContext *context) = 0;

    virtual antlrcpp::Any visitAlter_logfile_group(MySqlParser::Alter_logfile_groupContext *context) = 0;

    virtual antlrcpp::Any visitAlter_procedure(MySqlParser::Alter_procedureContext *context) = 0;

    virtual antlrcpp::Any visitAlter_server(MySqlParser::Alter_serverContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table(MySqlParser::Alter_tableContext *context) = 0;

    virtual antlrcpp::Any visitAlter_tablespace(MySqlParser::Alter_tablespaceContext *context) = 0;

    virtual antlrcpp::Any visitAlter_view(MySqlParser::Alter_viewContext *context) = 0;

    virtual antlrcpp::Any visitAltblTableOpt(MySqlParser::AltblTableOptContext *context) = 0;

    virtual antlrcpp::Any visitAltblAddCol(MySqlParser::AltblAddColContext *context) = 0;

    virtual antlrcpp::Any visitAltblAddCols(MySqlParser::AltblAddColsContext *context) = 0;

    virtual antlrcpp::Any visitAltblAddIndex(MySqlParser::AltblAddIndexContext *context) = 0;

    virtual antlrcpp::Any visitAltblAddPK(MySqlParser::AltblAddPKContext *context) = 0;

    virtual antlrcpp::Any visitAltblAddUK(MySqlParser::AltblAddUKContext *context) = 0;

    virtual antlrcpp::Any visitAltblAddSpecIndex(MySqlParser::AltblAddSpecIndexContext *context) = 0;

    virtual antlrcpp::Any visitAltblAddFK(MySqlParser::AltblAddFKContext *context) = 0;

    virtual antlrcpp::Any visitAltblAlg(MySqlParser::AltblAlgContext *context) = 0;

    virtual antlrcpp::Any visitAltblColDef(MySqlParser::AltblColDefContext *context) = 0;

    virtual antlrcpp::Any visitAltblColChange(MySqlParser::AltblColChangeContext *context) = 0;

    virtual antlrcpp::Any visitAltblLock(MySqlParser::AltblLockContext *context) = 0;

    virtual antlrcpp::Any visitAltblColMod(MySqlParser::AltblColModContext *context) = 0;

    virtual antlrcpp::Any visitAltblColDrop(MySqlParser::AltblColDropContext *context) = 0;

    virtual antlrcpp::Any visitAltblDropPK(MySqlParser::AltblDropPKContext *context) = 0;

    virtual antlrcpp::Any visitAltblDropIndex(MySqlParser::AltblDropIndexContext *context) = 0;

    virtual antlrcpp::Any visitAltblDropFK(MySqlParser::AltblDropFKContext *context) = 0;

    virtual antlrcpp::Any visitAltblDisKey(MySqlParser::AltblDisKeyContext *context) = 0;

    virtual antlrcpp::Any visitAltblEnKey(MySqlParser::AltblEnKeyContext *context) = 0;

    virtual antlrcpp::Any visitAltblRenameTbl(MySqlParser::AltblRenameTblContext *context) = 0;

    virtual antlrcpp::Any visitAltblResort(MySqlParser::AltblResortContext *context) = 0;

    virtual antlrcpp::Any visitAltblConvert(MySqlParser::AltblConvertContext *context) = 0;

    virtual antlrcpp::Any visitAltblDefCharset(MySqlParser::AltblDefCharsetContext *context) = 0;

    virtual antlrcpp::Any visitAltblDisTblspace(MySqlParser::AltblDisTblspaceContext *context) = 0;

    virtual antlrcpp::Any visitAltblImpTblSpace(MySqlParser::AltblImpTblSpaceContext *context) = 0;

    virtual antlrcpp::Any visitAltblForce(MySqlParser::AltblForceContext *context) = 0;

    virtual antlrcpp::Any visitAltblValid(MySqlParser::AltblValidContext *context) = 0;

    virtual antlrcpp::Any visitAltblAddPart(MySqlParser::AltblAddPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblDropPart(MySqlParser::AltblDropPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblDiscartPart(MySqlParser::AltblDiscartPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblImportPart(MySqlParser::AltblImportPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblTruncPart(MySqlParser::AltblTruncPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblCoalPart(MySqlParser::AltblCoalPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblReorgPart(MySqlParser::AltblReorgPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblExchPart(MySqlParser::AltblExchPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblAnalPart(MySqlParser::AltblAnalPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblCheckPart(MySqlParser::AltblCheckPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblOptimPart(MySqlParser::AltblOptimPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblRebuildPart(MySqlParser::AltblRebuildPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblRepairPart(MySqlParser::AltblRepairPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblRemovePart(MySqlParser::AltblRemovePartContext *context) = 0;

    virtual antlrcpp::Any visitAltblUpgrPart(MySqlParser::AltblUpgrPartContext *context) = 0;

    virtual antlrcpp::Any visitDrop_database(MySqlParser::Drop_databaseContext *context) = 0;

    virtual antlrcpp::Any visitDrop_event(MySqlParser::Drop_eventContext *context) = 0;

    virtual antlrcpp::Any visitDrop_index(MySqlParser::Drop_indexContext *context) = 0;

    virtual antlrcpp::Any visitDrop_logfile_group(MySqlParser::Drop_logfile_groupContext *context) = 0;

    virtual antlrcpp::Any visitDrop_procedure(MySqlParser::Drop_procedureContext *context) = 0;

    virtual antlrcpp::Any visitDrop_function(MySqlParser::Drop_functionContext *context) = 0;

    virtual antlrcpp::Any visitDrop_server(MySqlParser::Drop_serverContext *context) = 0;

    virtual antlrcpp::Any visitDrop_table(MySqlParser::Drop_tableContext *context) = 0;

    virtual antlrcpp::Any visitDrop_tablespace(MySqlParser::Drop_tablespaceContext *context) = 0;

    virtual antlrcpp::Any visitDrop_trigger(MySqlParser::Drop_triggerContext *context) = 0;

    virtual antlrcpp::Any visitDrop_view(MySqlParser::Drop_viewContext *context) = 0;

    virtual antlrcpp::Any visitRename_table(MySqlParser::Rename_tableContext *context) = 0;

    virtual antlrcpp::Any visitTruncate_table(MySqlParser::Truncate_tableContext *context) = 0;

    virtual antlrcpp::Any visitCall_statement(MySqlParser::Call_statementContext *context) = 0;

    virtual antlrcpp::Any visitDelete_statement(MySqlParser::Delete_statementContext *context) = 0;

    virtual antlrcpp::Any visitDo_statement(MySqlParser::Do_statementContext *context) = 0;

    virtual antlrcpp::Any visitHandler_statement(MySqlParser::Handler_statementContext *context) = 0;

    virtual antlrcpp::Any visitInsert_statement(MySqlParser::Insert_statementContext *context) = 0;

    virtual antlrcpp::Any visitLoad_data_statement(MySqlParser::Load_data_statementContext *context) = 0;

    virtual antlrcpp::Any visitLoad_xml_statement(MySqlParser::Load_xml_statementContext *context) = 0;

    virtual antlrcpp::Any visitReplace_statement(MySqlParser::Replace_statementContext *context) = 0;

    virtual antlrcpp::Any visitSimpleSelect(MySqlParser::SimpleSelectContext *context) = 0;

    virtual antlrcpp::Any visitParenSelect(MySqlParser::ParenSelectContext *context) = 0;

    virtual antlrcpp::Any visitUnionSelect(MySqlParser::UnionSelectContext *context) = 0;

    virtual antlrcpp::Any visitUnionParenSelect(MySqlParser::UnionParenSelectContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_statement(MySqlParser::Update_statementContext *context) = 0;

    virtual antlrcpp::Any visitInsert_statement_value(MySqlParser::Insert_statement_valueContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_elem(MySqlParser::Update_elemContext *context) = 0;

    virtual antlrcpp::Any visitCol_or_uservar(MySqlParser::Col_or_uservarContext *context) = 0;

    virtual antlrcpp::Any visitSingle_delete_statement(MySqlParser::Single_delete_statementContext *context) = 0;

    virtual antlrcpp::Any visitMultiple_delete_statement(MySqlParser::Multiple_delete_statementContext *context) = 0;

    virtual antlrcpp::Any visitHandler_open_statement(MySqlParser::Handler_open_statementContext *context) = 0;

    virtual antlrcpp::Any visitHandler_read_index_statement(MySqlParser::Handler_read_index_statementContext *context) = 0;

    virtual antlrcpp::Any visitHandler_read_statement(MySqlParser::Handler_read_statementContext *context) = 0;

    virtual antlrcpp::Any visitHandler_close_statement(MySqlParser::Handler_close_statementContext *context) = 0;

    virtual antlrcpp::Any visitSingle_update_statement(MySqlParser::Single_update_statementContext *context) = 0;

    virtual antlrcpp::Any visitMultiple_update_statement(MySqlParser::Multiple_update_statementContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by_clause(MySqlParser::Order_by_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by_expression(MySqlParser::Order_by_expressionContext *context) = 0;

    virtual antlrcpp::Any visitTable_sources(MySqlParser::Table_sourcesContext *context) = 0;

    virtual antlrcpp::Any visitTable_source(MySqlParser::Table_sourceContext *context) = 0;

    virtual antlrcpp::Any visitAtomTableItem(MySqlParser::AtomTableItemContext *context) = 0;

    virtual antlrcpp::Any visitSubqueryTableItem(MySqlParser::SubqueryTableItemContext *context) = 0;

    virtual antlrcpp::Any visitTableSourcesItem(MySqlParser::TableSourcesItemContext *context) = 0;

    virtual antlrcpp::Any visitIndex_hint(MySqlParser::Index_hintContext *context) = 0;

    virtual antlrcpp::Any visitInnerJoin(MySqlParser::InnerJoinContext *context) = 0;

    virtual antlrcpp::Any visitStraightJoin(MySqlParser::StraightJoinContext *context) = 0;

    virtual antlrcpp::Any visitOuterJoin(MySqlParser::OuterJoinContext *context) = 0;

    virtual antlrcpp::Any visitNaturalJoin(MySqlParser::NaturalJoinContext *context) = 0;

    virtual antlrcpp::Any visitSubquery(MySqlParser::SubqueryContext *context) = 0;

    virtual antlrcpp::Any visitQuery_expression(MySqlParser::Query_expressionContext *context) = 0;

    virtual antlrcpp::Any visitQuery_expression_nointo(MySqlParser::Query_expression_nointoContext *context) = 0;

    virtual antlrcpp::Any visitQuery_specification(MySqlParser::Query_specificationContext *context) = 0;

    virtual antlrcpp::Any visitQuery_specification_nointo(MySqlParser::Query_specification_nointoContext *context) = 0;

    virtual antlrcpp::Any visitUnion_parenth(MySqlParser::Union_parenthContext *context) = 0;

    virtual antlrcpp::Any visitUnion_statement(MySqlParser::Union_statementContext *context) = 0;

    virtual antlrcpp::Any visitSelect_spec(MySqlParser::Select_specContext *context) = 0;

    virtual antlrcpp::Any visitSelect_list(MySqlParser::Select_listContext *context) = 0;

    virtual antlrcpp::Any visitSellistelAllCol(MySqlParser::SellistelAllColContext *context) = 0;

    virtual antlrcpp::Any visitSellistelCol(MySqlParser::SellistelColContext *context) = 0;

    virtual antlrcpp::Any visitSellistelFunc(MySqlParser::SellistelFuncContext *context) = 0;

    virtual antlrcpp::Any visitSellistelExpr(MySqlParser::SellistelExprContext *context) = 0;

    virtual antlrcpp::Any visitSelectIntoVars(MySqlParser::SelectIntoVarsContext *context) = 0;

    virtual antlrcpp::Any visitSelectIntoDump(MySqlParser::SelectIntoDumpContext *context) = 0;

    virtual antlrcpp::Any visitSelectIntoOutfile(MySqlParser::SelectIntoOutfileContext *context) = 0;

    virtual antlrcpp::Any visitFrom_clause(MySqlParser::From_clauseContext *context) = 0;

    virtual antlrcpp::Any visitGroup_by_item(MySqlParser::Group_by_itemContext *context) = 0;

    virtual antlrcpp::Any visitLimit_clause(MySqlParser::Limit_clauseContext *context) = 0;

    virtual antlrcpp::Any visitStart_transaction(MySqlParser::Start_transactionContext *context) = 0;

    virtual antlrcpp::Any visitBegin_work(MySqlParser::Begin_workContext *context) = 0;

    virtual antlrcpp::Any visitCommit_work(MySqlParser::Commit_workContext *context) = 0;

    virtual antlrcpp::Any visitRollback_work(MySqlParser::Rollback_workContext *context) = 0;

    virtual antlrcpp::Any visitSavepoint_statement(MySqlParser::Savepoint_statementContext *context) = 0;

    virtual antlrcpp::Any visitRollback_statement(MySqlParser::Rollback_statementContext *context) = 0;

    virtual antlrcpp::Any visitRelease_statement(MySqlParser::Release_statementContext *context) = 0;

    virtual antlrcpp::Any visitLock_tables(MySqlParser::Lock_tablesContext *context) = 0;

    virtual antlrcpp::Any visitUnlock_tables(MySqlParser::Unlock_tablesContext *context) = 0;

    virtual antlrcpp::Any visitSet_autocommit_statement(MySqlParser::Set_autocommit_statementContext *context) = 0;

    virtual antlrcpp::Any visitSet_transaction_statement(MySqlParser::Set_transaction_statementContext *context) = 0;

    virtual antlrcpp::Any visitTransact_option(MySqlParser::Transact_optionContext *context) = 0;

    virtual antlrcpp::Any visitLock_table_element(MySqlParser::Lock_table_elementContext *context) = 0;

    virtual antlrcpp::Any visitTrans_characteristic(MySqlParser::Trans_characteristicContext *context) = 0;

    virtual antlrcpp::Any visitTransaction_level(MySqlParser::Transaction_levelContext *context) = 0;

    virtual antlrcpp::Any visitChange_master(MySqlParser::Change_masterContext *context) = 0;

    virtual antlrcpp::Any visitChange_repl_filter(MySqlParser::Change_repl_filterContext *context) = 0;

    virtual antlrcpp::Any visitPurge_binary_logs(MySqlParser::Purge_binary_logsContext *context) = 0;

    virtual antlrcpp::Any visitReset_master(MySqlParser::Reset_masterContext *context) = 0;

    virtual antlrcpp::Any visitReset_slave(MySqlParser::Reset_slaveContext *context) = 0;

    virtual antlrcpp::Any visitStart_slave(MySqlParser::Start_slaveContext *context) = 0;

    virtual antlrcpp::Any visitStop_slave(MySqlParser::Stop_slaveContext *context) = 0;

    virtual antlrcpp::Any visitStart_group_repl(MySqlParser::Start_group_replContext *context) = 0;

    virtual antlrcpp::Any visitStop_group_repl(MySqlParser::Stop_group_replContext *context) = 0;

    virtual antlrcpp::Any visitMasterOptString(MySqlParser::MasterOptStringContext *context) = 0;

    virtual antlrcpp::Any visitMasterOptDecimal(MySqlParser::MasterOptDecimalContext *context) = 0;

    virtual antlrcpp::Any visitMasterOptBool(MySqlParser::MasterOptBoolContext *context) = 0;

    virtual antlrcpp::Any visitMasterOptReal(MySqlParser::MasterOptRealContext *context) = 0;

    virtual antlrcpp::Any visitMasterOptIdList(MySqlParser::MasterOptIdListContext *context) = 0;

    virtual antlrcpp::Any visitString_master_option(MySqlParser::String_master_optionContext *context) = 0;

    virtual antlrcpp::Any visitDecimal_master_option(MySqlParser::Decimal_master_optionContext *context) = 0;

    virtual antlrcpp::Any visitBool_master_option(MySqlParser::Bool_master_optionContext *context) = 0;

    virtual antlrcpp::Any visitChannel_option(MySqlParser::Channel_optionContext *context) = 0;

    virtual antlrcpp::Any visitReplfilterDbList(MySqlParser::ReplfilterDbListContext *context) = 0;

    virtual antlrcpp::Any visitReplfilterTableList(MySqlParser::ReplfilterTableListContext *context) = 0;

    virtual antlrcpp::Any visitReplfilterStableList(MySqlParser::ReplfilterStableListContext *context) = 0;

    virtual antlrcpp::Any visitReplfilterTablepairList(MySqlParser::ReplfilterTablepairListContext *context) = 0;

    virtual antlrcpp::Any visitThread_type(MySqlParser::Thread_typeContext *context) = 0;

    virtual antlrcpp::Any visitUntilGtidSset(MySqlParser::UntilGtidSsetContext *context) = 0;

    virtual antlrcpp::Any visitUntilMasterLog(MySqlParser::UntilMasterLogContext *context) = 0;

    virtual antlrcpp::Any visitUntilRelayLog(MySqlParser::UntilRelayLogContext *context) = 0;

    virtual antlrcpp::Any visitUntilSqlGaps(MySqlParser::UntilSqlGapsContext *context) = 0;

    virtual antlrcpp::Any visitStart_slave_connection_option(MySqlParser::Start_slave_connection_optionContext *context) = 0;

    virtual antlrcpp::Any visitGtid_set(MySqlParser::Gtid_setContext *context) = 0;

    virtual antlrcpp::Any visitXa_start_transaction(MySqlParser::Xa_start_transactionContext *context) = 0;

    virtual antlrcpp::Any visitXa_end_transaction(MySqlParser::Xa_end_transactionContext *context) = 0;

    virtual antlrcpp::Any visitXa_prepare(MySqlParser::Xa_prepareContext *context) = 0;

    virtual antlrcpp::Any visitXa_commit_work(MySqlParser::Xa_commit_workContext *context) = 0;

    virtual antlrcpp::Any visitXa_rollback_work(MySqlParser::Xa_rollback_workContext *context) = 0;

    virtual antlrcpp::Any visitXa_recover_work(MySqlParser::Xa_recover_workContext *context) = 0;

    virtual antlrcpp::Any visitPrepare_statement(MySqlParser::Prepare_statementContext *context) = 0;

    virtual antlrcpp::Any visitExecute_statement(MySqlParser::Execute_statementContext *context) = 0;

    virtual antlrcpp::Any visitDeallocate_prepare(MySqlParser::Deallocate_prepareContext *context) = 0;

    virtual antlrcpp::Any visitRoutine_body(MySqlParser::Routine_bodyContext *context) = 0;

    virtual antlrcpp::Any visitBlock_statement(MySqlParser::Block_statementContext *context) = 0;

    virtual antlrcpp::Any visitCase_statement(MySqlParser::Case_statementContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement(MySqlParser::If_statementContext *context) = 0;

    virtual antlrcpp::Any visitIterate_statement(MySqlParser::Iterate_statementContext *context) = 0;

    virtual antlrcpp::Any visitLeave_statement(MySqlParser::Leave_statementContext *context) = 0;

    virtual antlrcpp::Any visitLoop_statement(MySqlParser::Loop_statementContext *context) = 0;

    virtual antlrcpp::Any visitRepeat_statement(MySqlParser::Repeat_statementContext *context) = 0;

    virtual antlrcpp::Any visitReturn_statement(MySqlParser::Return_statementContext *context) = 0;

    virtual antlrcpp::Any visitWhile_statement(MySqlParser::While_statementContext *context) = 0;

    virtual antlrcpp::Any visitCursor_statement(MySqlParser::Cursor_statementContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_variable(MySqlParser::Declare_variableContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_condition(MySqlParser::Declare_conditionContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_cursor(MySqlParser::Declare_cursorContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_handler(MySqlParser::Declare_handlerContext *context) = 0;

    virtual antlrcpp::Any visitHandler_condition_value(MySqlParser::Handler_condition_valueContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_sql_statement(MySqlParser::Procedure_sql_statementContext *context) = 0;

    virtual antlrcpp::Any visitAlterUserMysql56(MySqlParser::AlterUserMysql56Context *context) = 0;

    virtual antlrcpp::Any visitAlterUserMysql57(MySqlParser::AlterUserMysql57Context *context) = 0;

    virtual antlrcpp::Any visitCreateUserMysql56(MySqlParser::CreateUserMysql56Context *context) = 0;

    virtual antlrcpp::Any visitCreateUserMysql57(MySqlParser::CreateUserMysql57Context *context) = 0;

    virtual antlrcpp::Any visitDrop_user(MySqlParser::Drop_userContext *context) = 0;

    virtual antlrcpp::Any visitGrant_statement(MySqlParser::Grant_statementContext *context) = 0;

    virtual antlrcpp::Any visitGrant_proxy(MySqlParser::Grant_proxyContext *context) = 0;

    virtual antlrcpp::Any visitRename_user(MySqlParser::Rename_userContext *context) = 0;

    virtual antlrcpp::Any visitDetailRevoke(MySqlParser::DetailRevokeContext *context) = 0;

    virtual antlrcpp::Any visitShortRevoke(MySqlParser::ShortRevokeContext *context) = 0;

    virtual antlrcpp::Any visitRevoke_proxy(MySqlParser::Revoke_proxyContext *context) = 0;

    virtual antlrcpp::Any visitSet_password_statement(MySqlParser::Set_password_statementContext *context) = 0;

    virtual antlrcpp::Any visitUser_password_option(MySqlParser::User_password_optionContext *context) = 0;

    virtual antlrcpp::Any visitAuthByPassword(MySqlParser::AuthByPasswordContext *context) = 0;

    virtual antlrcpp::Any visitAuthByString(MySqlParser::AuthByStringContext *context) = 0;

    virtual antlrcpp::Any visitAuthByHash(MySqlParser::AuthByHashContext *context) = 0;

    virtual antlrcpp::Any visitTls_option(MySqlParser::Tls_optionContext *context) = 0;

    virtual antlrcpp::Any visitUser_resource_option(MySqlParser::User_resource_optionContext *context) = 0;

    virtual antlrcpp::Any visitUser_lock_option(MySqlParser::User_lock_optionContext *context) = 0;

    virtual antlrcpp::Any visitPrivelege_clause(MySqlParser::Privelege_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPrivilege(MySqlParser::PrivilegeContext *context) = 0;

    virtual antlrcpp::Any visitPrivilege_level(MySqlParser::Privilege_levelContext *context) = 0;

    virtual antlrcpp::Any visitSet_password_option(MySqlParser::Set_password_optionContext *context) = 0;

    virtual antlrcpp::Any visitAnalyze_table(MySqlParser::Analyze_tableContext *context) = 0;

    virtual antlrcpp::Any visitCheck_table(MySqlParser::Check_tableContext *context) = 0;

    virtual antlrcpp::Any visitChecksum_table(MySqlParser::Checksum_tableContext *context) = 0;

    virtual antlrcpp::Any visitOptimize_table(MySqlParser::Optimize_tableContext *context) = 0;

    virtual antlrcpp::Any visitRepair_table(MySqlParser::Repair_tableContext *context) = 0;

    virtual antlrcpp::Any visitCheck_table_option(MySqlParser::Check_table_optionContext *context) = 0;

    virtual antlrcpp::Any visitCreate_udfunction(MySqlParser::Create_udfunctionContext *context) = 0;

    virtual antlrcpp::Any visitInstall_plugin(MySqlParser::Install_pluginContext *context) = 0;

    virtual antlrcpp::Any visitUninstall_plugin(MySqlParser::Uninstall_pluginContext *context) = 0;

    virtual antlrcpp::Any visitSetVariableAssignment(MySqlParser::SetVariableAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitSetCharset(MySqlParser::SetCharsetContext *context) = 0;

    virtual antlrcpp::Any visitSetNames(MySqlParser::SetNamesContext *context) = 0;

    virtual antlrcpp::Any visitSetPasswordStatement(MySqlParser::SetPasswordStatementContext *context) = 0;

    virtual antlrcpp::Any visitSetTransaction(MySqlParser::SetTransactionContext *context) = 0;

    virtual antlrcpp::Any visitSetAutocommit(MySqlParser::SetAutocommitContext *context) = 0;

    virtual antlrcpp::Any visitShowMasterlogs(MySqlParser::ShowMasterlogsContext *context) = 0;

    virtual antlrcpp::Any visitShowLogevents(MySqlParser::ShowLogeventsContext *context) = 0;

    virtual antlrcpp::Any visitShowObjWithFilter(MySqlParser::ShowObjWithFilterContext *context) = 0;

    virtual antlrcpp::Any visitShowColumns(MySqlParser::ShowColumnsContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateDb(MySqlParser::ShowCreateDbContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateFullidobj(MySqlParser::ShowCreateFullidobjContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateUser(MySqlParser::ShowCreateUserContext *context) = 0;

    virtual antlrcpp::Any visitShowEngine(MySqlParser::ShowEngineContext *context) = 0;

    virtual antlrcpp::Any visitShowGlobalinfo(MySqlParser::ShowGlobalinfoContext *context) = 0;

    virtual antlrcpp::Any visitShowErrWarn(MySqlParser::ShowErrWarnContext *context) = 0;

    virtual antlrcpp::Any visitShowCountErrWarn(MySqlParser::ShowCountErrWarnContext *context) = 0;

    virtual antlrcpp::Any visitShowFromschemaFilter(MySqlParser::ShowFromschemaFilterContext *context) = 0;

    virtual antlrcpp::Any visitShowRoutinecode(MySqlParser::ShowRoutinecodeContext *context) = 0;

    virtual antlrcpp::Any visitShowGrants(MySqlParser::ShowGrantsContext *context) = 0;

    virtual antlrcpp::Any visitShowIndexes(MySqlParser::ShowIndexesContext *context) = 0;

    virtual antlrcpp::Any visitShowOpentables(MySqlParser::ShowOpentablesContext *context) = 0;

    virtual antlrcpp::Any visitShowProfile(MySqlParser::ShowProfileContext *context) = 0;

    virtual antlrcpp::Any visitShowSlavestatus(MySqlParser::ShowSlavestatusContext *context) = 0;

    virtual antlrcpp::Any visitVariable_clause(MySqlParser::Variable_clauseContext *context) = 0;

    virtual antlrcpp::Any visitShow_filter(MySqlParser::Show_filterContext *context) = 0;

    virtual antlrcpp::Any visitShow_profile_type(MySqlParser::Show_profile_typeContext *context) = 0;

    virtual antlrcpp::Any visitBinlog_statement(MySqlParser::Binlog_statementContext *context) = 0;

    virtual antlrcpp::Any visitCache_index_statement(MySqlParser::Cache_index_statementContext *context) = 0;

    virtual antlrcpp::Any visitFlush_statement(MySqlParser::Flush_statementContext *context) = 0;

    virtual antlrcpp::Any visitKill_statement(MySqlParser::Kill_statementContext *context) = 0;

    virtual antlrcpp::Any visitLoad_index_into_cache(MySqlParser::Load_index_into_cacheContext *context) = 0;

    virtual antlrcpp::Any visitReset_statement(MySqlParser::Reset_statementContext *context) = 0;

    virtual antlrcpp::Any visitShutdown_statement(MySqlParser::Shutdown_statementContext *context) = 0;

    virtual antlrcpp::Any visitTbl_index_list(MySqlParser::Tbl_index_listContext *context) = 0;

    virtual antlrcpp::Any visitFlush_option(MySqlParser::Flush_optionContext *context) = 0;

    virtual antlrcpp::Any visitLoad_tbl_index_list(MySqlParser::Load_tbl_index_listContext *context) = 0;

    virtual antlrcpp::Any visitSimple_describe_statement(MySqlParser::Simple_describe_statementContext *context) = 0;

    virtual antlrcpp::Any visitFull_describe_statement(MySqlParser::Full_describe_statementContext *context) = 0;

    virtual antlrcpp::Any visitHelp_statement(MySqlParser::Help_statementContext *context) = 0;

    virtual antlrcpp::Any visitUse_statement(MySqlParser::Use_statementContext *context) = 0;

    virtual antlrcpp::Any visitDescstmtDescObj(MySqlParser::DescstmtDescObjContext *context) = 0;

    virtual antlrcpp::Any visitConnectionDescObj(MySqlParser::ConnectionDescObjContext *context) = 0;

    virtual antlrcpp::Any visitTable_name(MySqlParser::Table_nameContext *context) = 0;

    virtual antlrcpp::Any visitFull_id(MySqlParser::Full_idContext *context) = 0;

    virtual antlrcpp::Any visitFull_column_name(MySqlParser::Full_column_nameContext *context) = 0;

    virtual antlrcpp::Any visitIndex_col_name(MySqlParser::Index_col_nameContext *context) = 0;

    virtual antlrcpp::Any visitUser_name(MySqlParser::User_nameContext *context) = 0;

    virtual antlrcpp::Any visitMysql_variable(MySqlParser::Mysql_variableContext *context) = 0;

    virtual antlrcpp::Any visitCharset_name(MySqlParser::Charset_nameContext *context) = 0;

    virtual antlrcpp::Any visitCollation_name(MySqlParser::Collation_nameContext *context) = 0;

    virtual antlrcpp::Any visitEngine_name(MySqlParser::Engine_nameContext *context) = 0;

    virtual antlrcpp::Any visitUuid_set(MySqlParser::Uuid_setContext *context) = 0;

    virtual antlrcpp::Any visitXid(MySqlParser::XidContext *context) = 0;

    virtual antlrcpp::Any visitXid_string_id(MySqlParser::Xid_string_idContext *context) = 0;

    virtual antlrcpp::Any visitAuth_plugin(MySqlParser::Auth_pluginContext *context) = 0;

    virtual antlrcpp::Any visitId_(MySqlParser::Id_Context *context) = 0;

    virtual antlrcpp::Any visitSimple_id(MySqlParser::Simple_idContext *context) = 0;

    virtual antlrcpp::Any visitDot_ext_id(MySqlParser::Dot_ext_idContext *context) = 0;

    virtual antlrcpp::Any visitDecimal_literal(MySqlParser::Decimal_literalContext *context) = 0;

    virtual antlrcpp::Any visitFilesize_literal(MySqlParser::Filesize_literalContext *context) = 0;

    virtual antlrcpp::Any visitString_literal(MySqlParser::String_literalContext *context) = 0;

    virtual antlrcpp::Any visitBoolean_literal(MySqlParser::Boolean_literalContext *context) = 0;

    virtual antlrcpp::Any visitHexadecimal_literal(MySqlParser::Hexadecimal_literalContext *context) = 0;

    virtual antlrcpp::Any visitNull_notnull(MySqlParser::Null_notnullContext *context) = 0;

    virtual antlrcpp::Any visitConstant(MySqlParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitCharDatatype(MySqlParser::CharDatatypeContext *context) = 0;

    virtual antlrcpp::Any visitDimensionDatatype(MySqlParser::DimensionDatatypeContext *context) = 0;

    virtual antlrcpp::Any visitSimpleDatatype(MySqlParser::SimpleDatatypeContext *context) = 0;

    virtual antlrcpp::Any visitCollectCharDatatype(MySqlParser::CollectCharDatatypeContext *context) = 0;

    virtual antlrcpp::Any visitSpatialDatatype(MySqlParser::SpatialDatatypeContext *context) = 0;

    virtual antlrcpp::Any visitData_type_to_convert(MySqlParser::Data_type_to_convertContext *context) = 0;

    virtual antlrcpp::Any visitSpatial_data_type(MySqlParser::Spatial_data_typeContext *context) = 0;

    virtual antlrcpp::Any visitLength_one_dimension(MySqlParser::Length_one_dimensionContext *context) = 0;

    virtual antlrcpp::Any visitLength_two_dimension(MySqlParser::Length_two_dimensionContext *context) = 0;

    virtual antlrcpp::Any visitLength_two_optional_dimension(MySqlParser::Length_two_optional_dimensionContext *context) = 0;

    virtual antlrcpp::Any visitId_list(MySqlParser::Id_listContext *context) = 0;

    virtual antlrcpp::Any visitTable_list(MySqlParser::Table_listContext *context) = 0;

    virtual antlrcpp::Any visitTable_pair_list(MySqlParser::Table_pair_listContext *context) = 0;

    virtual antlrcpp::Any visitIndex_colname_list(MySqlParser::Index_colname_listContext *context) = 0;

    virtual antlrcpp::Any visitExpression_list(MySqlParser::Expression_listContext *context) = 0;

    virtual antlrcpp::Any visitConstant_list(MySqlParser::Constant_listContext *context) = 0;

    virtual antlrcpp::Any visitSimple_string_list(MySqlParser::Simple_string_listContext *context) = 0;

    virtual antlrcpp::Any visitUser_var_list(MySqlParser::User_var_listContext *context) = 0;

    virtual antlrcpp::Any visitDefault_value(MySqlParser::Default_valueContext *context) = 0;

    virtual antlrcpp::Any visitIf_exists(MySqlParser::If_existsContext *context) = 0;

    virtual antlrcpp::Any visitIf_not_exists(MySqlParser::If_not_existsContext *context) = 0;

    virtual antlrcpp::Any visitSpecificFunctionCall(MySqlParser::SpecificFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitAggregateFunctionCall(MySqlParser::AggregateFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitScalarFunctionCall(MySqlParser::ScalarFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitUdfFunctionCall(MySqlParser::UdfFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitSimpleSpecificFCall(MySqlParser::SimpleSpecificFCallContext *context) = 0;

    virtual antlrcpp::Any visitConvertDataTypeFCall(MySqlParser::ConvertDataTypeFCallContext *context) = 0;

    virtual antlrcpp::Any visitValuesFCall(MySqlParser::ValuesFCallContext *context) = 0;

    virtual antlrcpp::Any visitCaseFCall(MySqlParser::CaseFCallContext *context) = 0;

    virtual antlrcpp::Any visitCharFCall(MySqlParser::CharFCallContext *context) = 0;

    virtual antlrcpp::Any visitPositionFCall(MySqlParser::PositionFCallContext *context) = 0;

    virtual antlrcpp::Any visitSubstrFCall(MySqlParser::SubstrFCallContext *context) = 0;

    virtual antlrcpp::Any visitTrimFCall(MySqlParser::TrimFCallContext *context) = 0;

    virtual antlrcpp::Any visitWeightFCall(MySqlParser::WeightFCallContext *context) = 0;

    virtual antlrcpp::Any visitExtractFCall(MySqlParser::ExtractFCallContext *context) = 0;

    virtual antlrcpp::Any visitGetFormatFCall(MySqlParser::GetFormatFCallContext *context) = 0;

    virtual antlrcpp::Any visitLevelWeightFList(MySqlParser::LevelWeightFListContext *context) = 0;

    virtual antlrcpp::Any visitLevelWeightFRange(MySqlParser::LevelWeightFRangeContext *context) = 0;

    virtual antlrcpp::Any visitAggregate_windowed_function(MySqlParser::Aggregate_windowed_functionContext *context) = 0;

    virtual antlrcpp::Any visitScalar_function_name(MySqlParser::Scalar_function_nameContext *context) = 0;

    virtual antlrcpp::Any visitFunction_args(MySqlParser::Function_argsContext *context) = 0;

    virtual antlrcpp::Any visitFunction_arg(MySqlParser::Function_argContext *context) = 0;

    virtual antlrcpp::Any visitIsExpression(MySqlParser::IsExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNotExpression(MySqlParser::NotExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalExpression(MySqlParser::LogicalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPredicateExpression(MySqlParser::PredicateExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSoundsLikePredicate(MySqlParser::SoundsLikePredicateContext *context) = 0;

    virtual antlrcpp::Any visitExpressionAtomPredicate(MySqlParser::ExpressionAtomPredicateContext *context) = 0;

    virtual antlrcpp::Any visitInPredicate(MySqlParser::InPredicateContext *context) = 0;

    virtual antlrcpp::Any visitSubqueryComparasionPredicate(MySqlParser::SubqueryComparasionPredicateContext *context) = 0;

    virtual antlrcpp::Any visitBetweenPredicate(MySqlParser::BetweenPredicateContext *context) = 0;

    virtual antlrcpp::Any visitBinaryComparasionPredicate(MySqlParser::BinaryComparasionPredicateContext *context) = 0;

    virtual antlrcpp::Any visitIsNullPredicate(MySqlParser::IsNullPredicateContext *context) = 0;

    virtual antlrcpp::Any visitLikePredicate(MySqlParser::LikePredicateContext *context) = 0;

    virtual antlrcpp::Any visitRegexpPredicate(MySqlParser::RegexpPredicateContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpressionAtom(MySqlParser::UnaryExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitExistsExpessionAtom(MySqlParser::ExistsExpessionAtomContext *context) = 0;

    virtual antlrcpp::Any visitConstantExpressionAtom(MySqlParser::ConstantExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallExpressionAtom(MySqlParser::FunctionCallExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitMysqlVariableExpressionAtom(MySqlParser::MysqlVariableExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitBinaryExpressionAtom(MySqlParser::BinaryExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitFullColumnNameExpressionAtom(MySqlParser::FullColumnNameExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitDefaultExpressionAtom(MySqlParser::DefaultExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitBitExpressionAtom(MySqlParser::BitExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitNestedExpressionAtom(MySqlParser::NestedExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitMathExpressionAtom(MySqlParser::MathExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitIntervalExpressionAtom(MySqlParser::IntervalExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitUnary_operator(MySqlParser::Unary_operatorContext *context) = 0;

    virtual antlrcpp::Any visitComparison_operator(MySqlParser::Comparison_operatorContext *context) = 0;

    virtual antlrcpp::Any visitLogical_operator(MySqlParser::Logical_operatorContext *context) = 0;

    virtual antlrcpp::Any visitBit_operator(MySqlParser::Bit_operatorContext *context) = 0;

    virtual antlrcpp::Any visitMath_operator(MySqlParser::Math_operatorContext *context) = 0;

    virtual antlrcpp::Any visitCharset_name_base(MySqlParser::Charset_name_baseContext *context) = 0;

    virtual antlrcpp::Any visitTransaction_level_base(MySqlParser::Transaction_level_baseContext *context) = 0;

    virtual antlrcpp::Any visitPrivileges_base(MySqlParser::Privileges_baseContext *context) = 0;

    virtual antlrcpp::Any visitInterval_type_base(MySqlParser::Interval_type_baseContext *context) = 0;

    virtual antlrcpp::Any visitData_type_base(MySqlParser::Data_type_baseContext *context) = 0;

    virtual antlrcpp::Any visitKeywords_can_be_id(MySqlParser::Keywords_can_be_idContext *context) = 0;

    virtual antlrcpp::Any visitFunction_name_base(MySqlParser::Function_name_baseContext *context) = 0;


};

}  // namespace parser

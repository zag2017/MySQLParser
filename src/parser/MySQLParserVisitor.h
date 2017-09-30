
// Generated from MySQLParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MySQLParser.h"


namespace parser {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by MySQLParser.
 */
class  MySQLParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MySQLParser.
   */
    virtual antlrcpp::Any visitRoot(MySQLParser::RootContext *context) = 0;

    virtual antlrcpp::Any visitSql_statements(MySQLParser::Sql_statementsContext *context) = 0;

    virtual antlrcpp::Any visitSql_statement(MySQLParser::Sql_statementContext *context) = 0;

    virtual antlrcpp::Any visitEmpty_statement(MySQLParser::Empty_statementContext *context) = 0;

    virtual antlrcpp::Any visitDdl_statement(MySQLParser::Ddl_statementContext *context) = 0;

    virtual antlrcpp::Any visitDml_statement(MySQLParser::Dml_statementContext *context) = 0;

    virtual antlrcpp::Any visitTransaction_statement(MySQLParser::Transaction_statementContext *context) = 0;

    virtual antlrcpp::Any visitReplication_statement(MySQLParser::Replication_statementContext *context) = 0;

    virtual antlrcpp::Any visitPrepared_statement(MySQLParser::Prepared_statementContext *context) = 0;

    virtual antlrcpp::Any visitCompound_statement(MySQLParser::Compound_statementContext *context) = 0;

    virtual antlrcpp::Any visitAdministration_statement(MySQLParser::Administration_statementContext *context) = 0;

    virtual antlrcpp::Any visitUtility_statement(MySQLParser::Utility_statementContext *context) = 0;

    virtual antlrcpp::Any visitCreate_database(MySQLParser::Create_databaseContext *context) = 0;

    virtual antlrcpp::Any visitCreate_event(MySQLParser::Create_eventContext *context) = 0;

    virtual antlrcpp::Any visitCreate_index(MySQLParser::Create_indexContext *context) = 0;

    virtual antlrcpp::Any visitCreate_logfile_group(MySQLParser::Create_logfile_groupContext *context) = 0;

    virtual antlrcpp::Any visitCreate_procedure(MySQLParser::Create_procedureContext *context) = 0;

    virtual antlrcpp::Any visitCreate_function(MySQLParser::Create_functionContext *context) = 0;

    virtual antlrcpp::Any visitCreate_server(MySQLParser::Create_serverContext *context) = 0;

    virtual antlrcpp::Any visitCopyCreateTable(MySQLParser::CopyCreateTableContext *context) = 0;

    virtual antlrcpp::Any visitQueryCreateTable(MySQLParser::QueryCreateTableContext *context) = 0;

    virtual antlrcpp::Any visitColCreateTable(MySQLParser::ColCreateTableContext *context) = 0;

    virtual antlrcpp::Any visitCreate_tablespace_innodb(MySQLParser::Create_tablespace_innodbContext *context) = 0;

    virtual antlrcpp::Any visitCreate_tablespace_ndb(MySQLParser::Create_tablespace_ndbContext *context) = 0;

    virtual antlrcpp::Any visitCreate_trigger(MySQLParser::Create_triggerContext *context) = 0;

    virtual antlrcpp::Any visitCreate_view(MySQLParser::Create_viewContext *context) = 0;

    virtual antlrcpp::Any visitCreate_database_option(MySQLParser::Create_database_optionContext *context) = 0;

    virtual antlrcpp::Any visitOwner_statement(MySQLParser::Owner_statementContext *context) = 0;

    virtual antlrcpp::Any visitPreciseSchedule(MySQLParser::PreciseScheduleContext *context) = 0;

    virtual antlrcpp::Any visitIntervalSchedule(MySQLParser::IntervalScheduleContext *context) = 0;

    virtual antlrcpp::Any visitTimestamp_value(MySQLParser::Timestamp_valueContext *context) = 0;

    virtual antlrcpp::Any visitInterval_expr(MySQLParser::Interval_exprContext *context) = 0;

    virtual antlrcpp::Any visitInterval_type(MySQLParser::Interval_typeContext *context) = 0;

    virtual antlrcpp::Any visitIndex_type(MySQLParser::Index_typeContext *context) = 0;

    virtual antlrcpp::Any visitIndex_option(MySQLParser::Index_optionContext *context) = 0;

    virtual antlrcpp::Any visitProc_param(MySQLParser::Proc_paramContext *context) = 0;

    virtual antlrcpp::Any visitFunc_param(MySQLParser::Func_paramContext *context) = 0;

    virtual antlrcpp::Any visitRcComment(MySQLParser::RcCommentContext *context) = 0;

    virtual antlrcpp::Any visitRcSqllang(MySQLParser::RcSqllangContext *context) = 0;

    virtual antlrcpp::Any visitRcDeterm(MySQLParser::RcDetermContext *context) = 0;

    virtual antlrcpp::Any visitRcSqldata(MySQLParser::RcSqldataContext *context) = 0;

    virtual antlrcpp::Any visitRcSecurestmt(MySQLParser::RcSecurestmtContext *context) = 0;

    virtual antlrcpp::Any visitServer_option(MySQLParser::Server_optionContext *context) = 0;

    virtual antlrcpp::Any visitColumn_def_table_constraints(MySQLParser::Column_def_table_constraintsContext *context) = 0;

    virtual antlrcpp::Any visitColumnDefinition(MySQLParser::ColumnDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitConstraintDefinition(MySQLParser::ConstraintDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitIndexDefinition(MySQLParser::IndexDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitColumn_definition(MySQLParser::Column_definitionContext *context) = 0;

    virtual antlrcpp::Any visitColConstrNull(MySQLParser::ColConstrNullContext *context) = 0;

    virtual antlrcpp::Any visitColConstrDflt(MySQLParser::ColConstrDfltContext *context) = 0;

    virtual antlrcpp::Any visitColConstrAuInc(MySQLParser::ColConstrAuIncContext *context) = 0;

    virtual antlrcpp::Any visitColConstrPK(MySQLParser::ColConstrPKContext *context) = 0;

    virtual antlrcpp::Any visitColConstrUK(MySQLParser::ColConstrUKContext *context) = 0;

    virtual antlrcpp::Any visitColConstrComment(MySQLParser::ColConstrCommentContext *context) = 0;

    virtual antlrcpp::Any visitColConstrForm(MySQLParser::ColConstrFormContext *context) = 0;

    virtual antlrcpp::Any visitColConstrStorage(MySQLParser::ColConstrStorageContext *context) = 0;

    virtual antlrcpp::Any visitColConstrRefdef(MySQLParser::ColConstrRefdefContext *context) = 0;

    virtual antlrcpp::Any visitTblConstrPK(MySQLParser::TblConstrPKContext *context) = 0;

    virtual antlrcpp::Any visitTblConstrUK(MySQLParser::TblConstrUKContext *context) = 0;

    virtual antlrcpp::Any visitTblConstrFK(MySQLParser::TblConstrFKContext *context) = 0;

    virtual antlrcpp::Any visitTblConstCheck(MySQLParser::TblConstCheckContext *context) = 0;

    virtual antlrcpp::Any visitReference_definition(MySQLParser::Reference_definitionContext *context) = 0;

    virtual antlrcpp::Any visitOn_delete_action(MySQLParser::On_delete_actionContext *context) = 0;

    virtual antlrcpp::Any visitOn_update_action(MySQLParser::On_update_actionContext *context) = 0;

    virtual antlrcpp::Any visitReference_action_control_type(MySQLParser::Reference_action_control_typeContext *context) = 0;

    virtual antlrcpp::Any visitSimpleIndex(MySQLParser::SimpleIndexContext *context) = 0;

    virtual antlrcpp::Any visitSpecIndex(MySQLParser::SpecIndexContext *context) = 0;

    virtual antlrcpp::Any visitTblOptEngine(MySQLParser::TblOptEngineContext *context) = 0;

    virtual antlrcpp::Any visitTblOptAuInc(MySQLParser::TblOptAuIncContext *context) = 0;

    virtual antlrcpp::Any visitTblOptAvgRLen(MySQLParser::TblOptAvgRLenContext *context) = 0;

    virtual antlrcpp::Any visitTblOptDefCharSet(MySQLParser::TblOptDefCharSetContext *context) = 0;

    virtual antlrcpp::Any visitTblOptChkSum(MySQLParser::TblOptChkSumContext *context) = 0;

    virtual antlrcpp::Any visitTblOptDefCollate(MySQLParser::TblOptDefCollateContext *context) = 0;

    virtual antlrcpp::Any visitTblOptComment(MySQLParser::TblOptCommentContext *context) = 0;

    virtual antlrcpp::Any visitTblOptCompr(MySQLParser::TblOptComprContext *context) = 0;

    virtual antlrcpp::Any visitTblOptConn(MySQLParser::TblOptConnContext *context) = 0;

    virtual antlrcpp::Any visitTblOptDataDir(MySQLParser::TblOptDataDirContext *context) = 0;

    virtual antlrcpp::Any visitTblOptDelKW(MySQLParser::TblOptDelKWContext *context) = 0;

    virtual antlrcpp::Any visitTblOptEncr(MySQLParser::TblOptEncrContext *context) = 0;

    virtual antlrcpp::Any visitTblOptIndexDir(MySQLParser::TblOptIndexDirContext *context) = 0;

    virtual antlrcpp::Any visitTblOptInsMeth(MySQLParser::TblOptInsMethContext *context) = 0;

    virtual antlrcpp::Any visitTblOptKeyBlockSz(MySQLParser::TblOptKeyBlockSzContext *context) = 0;

    virtual antlrcpp::Any visitTblOptMaxRows(MySQLParser::TblOptMaxRowsContext *context) = 0;

    virtual antlrcpp::Any visitTblOptMinRows(MySQLParser::TblOptMinRowsContext *context) = 0;

    virtual antlrcpp::Any visitTblOptPackK(MySQLParser::TblOptPackKContext *context) = 0;

    virtual antlrcpp::Any visitTblOptPasswd(MySQLParser::TblOptPasswdContext *context) = 0;

    virtual antlrcpp::Any visitTblOptRowFormat(MySQLParser::TblOptRowFormatContext *context) = 0;

    virtual antlrcpp::Any visitTblOptStatAutoR(MySQLParser::TblOptStatAutoRContext *context) = 0;

    virtual antlrcpp::Any visitTblOptStatPersist(MySQLParser::TblOptStatPersistContext *context) = 0;

    virtual antlrcpp::Any visitTblOptStatSamplPg(MySQLParser::TblOptStatSamplPgContext *context) = 0;

    virtual antlrcpp::Any visitTblOptTablespace(MySQLParser::TblOptTablespaceContext *context) = 0;

    virtual antlrcpp::Any visitTblOptUnion(MySQLParser::TblOptUnionContext *context) = 0;

    virtual antlrcpp::Any visitPartition_options(MySQLParser::Partition_optionsContext *context) = 0;

    virtual antlrcpp::Any visitPartition_function_definition(MySQLParser::Partition_function_definitionContext *context) = 0;

    virtual antlrcpp::Any visitLinear_partition_func_def(MySQLParser::Linear_partition_func_defContext *context) = 0;

    virtual antlrcpp::Any visitPartition_def(MySQLParser::Partition_defContext *context) = 0;

    virtual antlrcpp::Any visitSubpartition_def(MySQLParser::Subpartition_defContext *context) = 0;

    virtual antlrcpp::Any visitAlterDb(MySQLParser::AlterDbContext *context) = 0;

    virtual antlrcpp::Any visitAlterDbUpgradeName(MySQLParser::AlterDbUpgradeNameContext *context) = 0;

    virtual antlrcpp::Any visitAlter_event(MySQLParser::Alter_eventContext *context) = 0;

    virtual antlrcpp::Any visitAlter_function(MySQLParser::Alter_functionContext *context) = 0;

    virtual antlrcpp::Any visitAlter_instance(MySQLParser::Alter_instanceContext *context) = 0;

    virtual antlrcpp::Any visitAlter_logfile_group(MySQLParser::Alter_logfile_groupContext *context) = 0;

    virtual antlrcpp::Any visitAlter_procedure(MySQLParser::Alter_procedureContext *context) = 0;

    virtual antlrcpp::Any visitAlter_server(MySQLParser::Alter_serverContext *context) = 0;

    virtual antlrcpp::Any visitAlter_table(MySQLParser::Alter_tableContext *context) = 0;

    virtual antlrcpp::Any visitAlter_tablespace(MySQLParser::Alter_tablespaceContext *context) = 0;

    virtual antlrcpp::Any visitAlter_view(MySQLParser::Alter_viewContext *context) = 0;

    virtual antlrcpp::Any visitAltblTableOpt(MySQLParser::AltblTableOptContext *context) = 0;

    virtual antlrcpp::Any visitAltblAddCol(MySQLParser::AltblAddColContext *context) = 0;

    virtual antlrcpp::Any visitAltblAddCols(MySQLParser::AltblAddColsContext *context) = 0;

    virtual antlrcpp::Any visitAltblAddIndex(MySQLParser::AltblAddIndexContext *context) = 0;

    virtual antlrcpp::Any visitAltblAddPK(MySQLParser::AltblAddPKContext *context) = 0;

    virtual antlrcpp::Any visitAltblAddUK(MySQLParser::AltblAddUKContext *context) = 0;

    virtual antlrcpp::Any visitAltblAddSpecIndex(MySQLParser::AltblAddSpecIndexContext *context) = 0;

    virtual antlrcpp::Any visitAltblAddFK(MySQLParser::AltblAddFKContext *context) = 0;

    virtual antlrcpp::Any visitAltblAlg(MySQLParser::AltblAlgContext *context) = 0;

    virtual antlrcpp::Any visitAltblColDef(MySQLParser::AltblColDefContext *context) = 0;

    virtual antlrcpp::Any visitAltblColChange(MySQLParser::AltblColChangeContext *context) = 0;

    virtual antlrcpp::Any visitAltblLock(MySQLParser::AltblLockContext *context) = 0;

    virtual antlrcpp::Any visitAltblColMod(MySQLParser::AltblColModContext *context) = 0;

    virtual antlrcpp::Any visitAltblColDrop(MySQLParser::AltblColDropContext *context) = 0;

    virtual antlrcpp::Any visitAltblDropPK(MySQLParser::AltblDropPKContext *context) = 0;

    virtual antlrcpp::Any visitAltblDropIndex(MySQLParser::AltblDropIndexContext *context) = 0;

    virtual antlrcpp::Any visitAltblDropFK(MySQLParser::AltblDropFKContext *context) = 0;

    virtual antlrcpp::Any visitAltblDisKey(MySQLParser::AltblDisKeyContext *context) = 0;

    virtual antlrcpp::Any visitAltblEnKey(MySQLParser::AltblEnKeyContext *context) = 0;

    virtual antlrcpp::Any visitAltblRenameTbl(MySQLParser::AltblRenameTblContext *context) = 0;

    virtual antlrcpp::Any visitAltblResort(MySQLParser::AltblResortContext *context) = 0;

    virtual antlrcpp::Any visitAltblConvert(MySQLParser::AltblConvertContext *context) = 0;

    virtual antlrcpp::Any visitAltblDefCharset(MySQLParser::AltblDefCharsetContext *context) = 0;

    virtual antlrcpp::Any visitAltblDisTblspace(MySQLParser::AltblDisTblspaceContext *context) = 0;

    virtual antlrcpp::Any visitAltblImpTblSpace(MySQLParser::AltblImpTblSpaceContext *context) = 0;

    virtual antlrcpp::Any visitAltblForce(MySQLParser::AltblForceContext *context) = 0;

    virtual antlrcpp::Any visitAltblValid(MySQLParser::AltblValidContext *context) = 0;

    virtual antlrcpp::Any visitAltblAddPart(MySQLParser::AltblAddPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblDropPart(MySQLParser::AltblDropPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblDiscartPart(MySQLParser::AltblDiscartPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblImportPart(MySQLParser::AltblImportPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblTruncPart(MySQLParser::AltblTruncPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblCoalPart(MySQLParser::AltblCoalPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblReorgPart(MySQLParser::AltblReorgPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblExchPart(MySQLParser::AltblExchPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblAnalPart(MySQLParser::AltblAnalPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblCheckPart(MySQLParser::AltblCheckPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblOptimPart(MySQLParser::AltblOptimPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblRebuildPart(MySQLParser::AltblRebuildPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblRepairPart(MySQLParser::AltblRepairPartContext *context) = 0;

    virtual antlrcpp::Any visitAltblRemovePart(MySQLParser::AltblRemovePartContext *context) = 0;

    virtual antlrcpp::Any visitAltblUpgrPart(MySQLParser::AltblUpgrPartContext *context) = 0;

    virtual antlrcpp::Any visitDrop_database(MySQLParser::Drop_databaseContext *context) = 0;

    virtual antlrcpp::Any visitDrop_event(MySQLParser::Drop_eventContext *context) = 0;

    virtual antlrcpp::Any visitDrop_index(MySQLParser::Drop_indexContext *context) = 0;

    virtual antlrcpp::Any visitDrop_logfile_group(MySQLParser::Drop_logfile_groupContext *context) = 0;

    virtual antlrcpp::Any visitDrop_procedure(MySQLParser::Drop_procedureContext *context) = 0;

    virtual antlrcpp::Any visitDrop_function(MySQLParser::Drop_functionContext *context) = 0;

    virtual antlrcpp::Any visitDrop_server(MySQLParser::Drop_serverContext *context) = 0;

    virtual antlrcpp::Any visitDrop_table(MySQLParser::Drop_tableContext *context) = 0;

    virtual antlrcpp::Any visitDrop_tablespace(MySQLParser::Drop_tablespaceContext *context) = 0;

    virtual antlrcpp::Any visitDrop_trigger(MySQLParser::Drop_triggerContext *context) = 0;

    virtual antlrcpp::Any visitDrop_view(MySQLParser::Drop_viewContext *context) = 0;

    virtual antlrcpp::Any visitRename_table(MySQLParser::Rename_tableContext *context) = 0;

    virtual antlrcpp::Any visitTruncate_table(MySQLParser::Truncate_tableContext *context) = 0;

    virtual antlrcpp::Any visitCall_statement(MySQLParser::Call_statementContext *context) = 0;

    virtual antlrcpp::Any visitDelete_statement(MySQLParser::Delete_statementContext *context) = 0;

    virtual antlrcpp::Any visitDo_statement(MySQLParser::Do_statementContext *context) = 0;

    virtual antlrcpp::Any visitHandler_statement(MySQLParser::Handler_statementContext *context) = 0;

    virtual antlrcpp::Any visitInsert_statement(MySQLParser::Insert_statementContext *context) = 0;

    virtual antlrcpp::Any visitLoad_data_statement(MySQLParser::Load_data_statementContext *context) = 0;

    virtual antlrcpp::Any visitLoad_xml_statement(MySQLParser::Load_xml_statementContext *context) = 0;

    virtual antlrcpp::Any visitReplace_statement(MySQLParser::Replace_statementContext *context) = 0;

    virtual antlrcpp::Any visitSimpleSelect(MySQLParser::SimpleSelectContext *context) = 0;

    virtual antlrcpp::Any visitParenSelect(MySQLParser::ParenSelectContext *context) = 0;

    virtual antlrcpp::Any visitUnionSelect(MySQLParser::UnionSelectContext *context) = 0;

    virtual antlrcpp::Any visitUnionParenSelect(MySQLParser::UnionParenSelectContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_statement(MySQLParser::Update_statementContext *context) = 0;

    virtual antlrcpp::Any visitInsert_statement_value(MySQLParser::Insert_statement_valueContext *context) = 0;

    virtual antlrcpp::Any visitUpdate_elem(MySQLParser::Update_elemContext *context) = 0;

    virtual antlrcpp::Any visitCol_or_uservar(MySQLParser::Col_or_uservarContext *context) = 0;

    virtual antlrcpp::Any visitSingle_delete_statement(MySQLParser::Single_delete_statementContext *context) = 0;

    virtual antlrcpp::Any visitMultiple_delete_statement(MySQLParser::Multiple_delete_statementContext *context) = 0;

    virtual antlrcpp::Any visitHandler_open_statement(MySQLParser::Handler_open_statementContext *context) = 0;

    virtual antlrcpp::Any visitHandler_read_index_statement(MySQLParser::Handler_read_index_statementContext *context) = 0;

    virtual antlrcpp::Any visitHandler_read_statement(MySQLParser::Handler_read_statementContext *context) = 0;

    virtual antlrcpp::Any visitHandler_close_statement(MySQLParser::Handler_close_statementContext *context) = 0;

    virtual antlrcpp::Any visitSingle_update_statement(MySQLParser::Single_update_statementContext *context) = 0;

    virtual antlrcpp::Any visitMultiple_update_statement(MySQLParser::Multiple_update_statementContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by_clause(MySQLParser::Order_by_clauseContext *context) = 0;

    virtual antlrcpp::Any visitOrder_by_expression(MySQLParser::Order_by_expressionContext *context) = 0;

    virtual antlrcpp::Any visitTable_sources(MySQLParser::Table_sourcesContext *context) = 0;

    virtual antlrcpp::Any visitTable_source(MySQLParser::Table_sourceContext *context) = 0;

    virtual antlrcpp::Any visitAtomTableItem(MySQLParser::AtomTableItemContext *context) = 0;

    virtual antlrcpp::Any visitSubqueryTableItem(MySQLParser::SubqueryTableItemContext *context) = 0;

    virtual antlrcpp::Any visitTableSourcesItem(MySQLParser::TableSourcesItemContext *context) = 0;

    virtual antlrcpp::Any visitIndex_hint(MySQLParser::Index_hintContext *context) = 0;

    virtual antlrcpp::Any visitInnerJoin(MySQLParser::InnerJoinContext *context) = 0;

    virtual antlrcpp::Any visitStraightJoin(MySQLParser::StraightJoinContext *context) = 0;

    virtual antlrcpp::Any visitOuterJoin(MySQLParser::OuterJoinContext *context) = 0;

    virtual antlrcpp::Any visitNaturalJoin(MySQLParser::NaturalJoinContext *context) = 0;

    virtual antlrcpp::Any visitSubquery(MySQLParser::SubqueryContext *context) = 0;

    virtual antlrcpp::Any visitQuery_expression(MySQLParser::Query_expressionContext *context) = 0;

    virtual antlrcpp::Any visitQuery_expression_nointo(MySQLParser::Query_expression_nointoContext *context) = 0;

    virtual antlrcpp::Any visitQuery_specification(MySQLParser::Query_specificationContext *context) = 0;

    virtual antlrcpp::Any visitQuery_specification_nointo(MySQLParser::Query_specification_nointoContext *context) = 0;

    virtual antlrcpp::Any visitUnion_parenth(MySQLParser::Union_parenthContext *context) = 0;

    virtual antlrcpp::Any visitUnion_statement(MySQLParser::Union_statementContext *context) = 0;

    virtual antlrcpp::Any visitSelect_spec(MySQLParser::Select_specContext *context) = 0;

    virtual antlrcpp::Any visitSelect_list(MySQLParser::Select_listContext *context) = 0;

    virtual antlrcpp::Any visitSellistelAllCol(MySQLParser::SellistelAllColContext *context) = 0;

    virtual antlrcpp::Any visitSellistelCol(MySQLParser::SellistelColContext *context) = 0;

    virtual antlrcpp::Any visitSellistelFunc(MySQLParser::SellistelFuncContext *context) = 0;

    virtual antlrcpp::Any visitSellistelExpr(MySQLParser::SellistelExprContext *context) = 0;

    virtual antlrcpp::Any visitSelectIntoVars(MySQLParser::SelectIntoVarsContext *context) = 0;

    virtual antlrcpp::Any visitSelectIntoDump(MySQLParser::SelectIntoDumpContext *context) = 0;

    virtual antlrcpp::Any visitSelectIntoOutfile(MySQLParser::SelectIntoOutfileContext *context) = 0;

    virtual antlrcpp::Any visitFrom_clause(MySQLParser::From_clauseContext *context) = 0;

    virtual antlrcpp::Any visitGroup_by_item(MySQLParser::Group_by_itemContext *context) = 0;

    virtual antlrcpp::Any visitLimit_clause(MySQLParser::Limit_clauseContext *context) = 0;

    virtual antlrcpp::Any visitStart_transaction(MySQLParser::Start_transactionContext *context) = 0;

    virtual antlrcpp::Any visitBegin_work(MySQLParser::Begin_workContext *context) = 0;

    virtual antlrcpp::Any visitCommit_work(MySQLParser::Commit_workContext *context) = 0;

    virtual antlrcpp::Any visitRollback_work(MySQLParser::Rollback_workContext *context) = 0;

    virtual antlrcpp::Any visitSavepoint_statement(MySQLParser::Savepoint_statementContext *context) = 0;

    virtual antlrcpp::Any visitRollback_statement(MySQLParser::Rollback_statementContext *context) = 0;

    virtual antlrcpp::Any visitRelease_statement(MySQLParser::Release_statementContext *context) = 0;

    virtual antlrcpp::Any visitLock_tables(MySQLParser::Lock_tablesContext *context) = 0;

    virtual antlrcpp::Any visitUnlock_tables(MySQLParser::Unlock_tablesContext *context) = 0;

    virtual antlrcpp::Any visitSet_autocommit_statement(MySQLParser::Set_autocommit_statementContext *context) = 0;

    virtual antlrcpp::Any visitSet_transaction_statement(MySQLParser::Set_transaction_statementContext *context) = 0;

    virtual antlrcpp::Any visitTransact_option(MySQLParser::Transact_optionContext *context) = 0;

    virtual antlrcpp::Any visitLock_table_element(MySQLParser::Lock_table_elementContext *context) = 0;

    virtual antlrcpp::Any visitTrans_characteristic(MySQLParser::Trans_characteristicContext *context) = 0;

    virtual antlrcpp::Any visitTransaction_level(MySQLParser::Transaction_levelContext *context) = 0;

    virtual antlrcpp::Any visitChange_master(MySQLParser::Change_masterContext *context) = 0;

    virtual antlrcpp::Any visitChange_repl_filter(MySQLParser::Change_repl_filterContext *context) = 0;

    virtual antlrcpp::Any visitPurge_binary_logs(MySQLParser::Purge_binary_logsContext *context) = 0;

    virtual antlrcpp::Any visitReset_master(MySQLParser::Reset_masterContext *context) = 0;

    virtual antlrcpp::Any visitReset_slave(MySQLParser::Reset_slaveContext *context) = 0;

    virtual antlrcpp::Any visitStart_slave(MySQLParser::Start_slaveContext *context) = 0;

    virtual antlrcpp::Any visitStop_slave(MySQLParser::Stop_slaveContext *context) = 0;

    virtual antlrcpp::Any visitStart_group_repl(MySQLParser::Start_group_replContext *context) = 0;

    virtual antlrcpp::Any visitStop_group_repl(MySQLParser::Stop_group_replContext *context) = 0;

    virtual antlrcpp::Any visitMasterOptString(MySQLParser::MasterOptStringContext *context) = 0;

    virtual antlrcpp::Any visitMasterOptDecimal(MySQLParser::MasterOptDecimalContext *context) = 0;

    virtual antlrcpp::Any visitMasterOptBool(MySQLParser::MasterOptBoolContext *context) = 0;

    virtual antlrcpp::Any visitMasterOptReal(MySQLParser::MasterOptRealContext *context) = 0;

    virtual antlrcpp::Any visitMasterOptIdList(MySQLParser::MasterOptIdListContext *context) = 0;

    virtual antlrcpp::Any visitString_master_option(MySQLParser::String_master_optionContext *context) = 0;

    virtual antlrcpp::Any visitDecimal_master_option(MySQLParser::Decimal_master_optionContext *context) = 0;

    virtual antlrcpp::Any visitBool_master_option(MySQLParser::Bool_master_optionContext *context) = 0;

    virtual antlrcpp::Any visitChannel_option(MySQLParser::Channel_optionContext *context) = 0;

    virtual antlrcpp::Any visitReplfilterDbList(MySQLParser::ReplfilterDbListContext *context) = 0;

    virtual antlrcpp::Any visitReplfilterTableList(MySQLParser::ReplfilterTableListContext *context) = 0;

    virtual antlrcpp::Any visitReplfilterStableList(MySQLParser::ReplfilterStableListContext *context) = 0;

    virtual antlrcpp::Any visitReplfilterTablepairList(MySQLParser::ReplfilterTablepairListContext *context) = 0;

    virtual antlrcpp::Any visitThread_type(MySQLParser::Thread_typeContext *context) = 0;

    virtual antlrcpp::Any visitUntilGtidSset(MySQLParser::UntilGtidSsetContext *context) = 0;

    virtual antlrcpp::Any visitUntilMasterLog(MySQLParser::UntilMasterLogContext *context) = 0;

    virtual antlrcpp::Any visitUntilRelayLog(MySQLParser::UntilRelayLogContext *context) = 0;

    virtual antlrcpp::Any visitUntilSqlGaps(MySQLParser::UntilSqlGapsContext *context) = 0;

    virtual antlrcpp::Any visitStart_slave_connection_option(MySQLParser::Start_slave_connection_optionContext *context) = 0;

    virtual antlrcpp::Any visitGtid_set(MySQLParser::Gtid_setContext *context) = 0;

    virtual antlrcpp::Any visitXa_start_transaction(MySQLParser::Xa_start_transactionContext *context) = 0;

    virtual antlrcpp::Any visitXa_end_transaction(MySQLParser::Xa_end_transactionContext *context) = 0;

    virtual antlrcpp::Any visitXa_prepare(MySQLParser::Xa_prepareContext *context) = 0;

    virtual antlrcpp::Any visitXa_commit_work(MySQLParser::Xa_commit_workContext *context) = 0;

    virtual antlrcpp::Any visitXa_rollback_work(MySQLParser::Xa_rollback_workContext *context) = 0;

    virtual antlrcpp::Any visitXa_recover_work(MySQLParser::Xa_recover_workContext *context) = 0;

    virtual antlrcpp::Any visitPrepare_statement(MySQLParser::Prepare_statementContext *context) = 0;

    virtual antlrcpp::Any visitExecute_statement(MySQLParser::Execute_statementContext *context) = 0;

    virtual antlrcpp::Any visitDeallocate_prepare(MySQLParser::Deallocate_prepareContext *context) = 0;

    virtual antlrcpp::Any visitRoutine_body(MySQLParser::Routine_bodyContext *context) = 0;

    virtual antlrcpp::Any visitBlock_statement(MySQLParser::Block_statementContext *context) = 0;

    virtual antlrcpp::Any visitCase_statement(MySQLParser::Case_statementContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement(MySQLParser::If_statementContext *context) = 0;

    virtual antlrcpp::Any visitIterate_statement(MySQLParser::Iterate_statementContext *context) = 0;

    virtual antlrcpp::Any visitLeave_statement(MySQLParser::Leave_statementContext *context) = 0;

    virtual antlrcpp::Any visitLoop_statement(MySQLParser::Loop_statementContext *context) = 0;

    virtual antlrcpp::Any visitRepeat_statement(MySQLParser::Repeat_statementContext *context) = 0;

    virtual antlrcpp::Any visitReturn_statement(MySQLParser::Return_statementContext *context) = 0;

    virtual antlrcpp::Any visitWhile_statement(MySQLParser::While_statementContext *context) = 0;

    virtual antlrcpp::Any visitCursor_statement(MySQLParser::Cursor_statementContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_variable(MySQLParser::Declare_variableContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_condition(MySQLParser::Declare_conditionContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_cursor(MySQLParser::Declare_cursorContext *context) = 0;

    virtual antlrcpp::Any visitDeclare_handler(MySQLParser::Declare_handlerContext *context) = 0;

    virtual antlrcpp::Any visitHandler_condition_value(MySQLParser::Handler_condition_valueContext *context) = 0;

    virtual antlrcpp::Any visitProcedure_sql_statement(MySQLParser::Procedure_sql_statementContext *context) = 0;

    virtual antlrcpp::Any visitAlterUserMysql56(MySQLParser::AlterUserMysql56Context *context) = 0;

    virtual antlrcpp::Any visitAlterUserMysql57(MySQLParser::AlterUserMysql57Context *context) = 0;

    virtual antlrcpp::Any visitCreateUserMysql56(MySQLParser::CreateUserMysql56Context *context) = 0;

    virtual antlrcpp::Any visitCreateUserMysql57(MySQLParser::CreateUserMysql57Context *context) = 0;

    virtual antlrcpp::Any visitDrop_user(MySQLParser::Drop_userContext *context) = 0;

    virtual antlrcpp::Any visitGrant_statement(MySQLParser::Grant_statementContext *context) = 0;

    virtual antlrcpp::Any visitGrant_proxy(MySQLParser::Grant_proxyContext *context) = 0;

    virtual antlrcpp::Any visitRename_user(MySQLParser::Rename_userContext *context) = 0;

    virtual antlrcpp::Any visitDetailRevoke(MySQLParser::DetailRevokeContext *context) = 0;

    virtual antlrcpp::Any visitShortRevoke(MySQLParser::ShortRevokeContext *context) = 0;

    virtual antlrcpp::Any visitRevoke_proxy(MySQLParser::Revoke_proxyContext *context) = 0;

    virtual antlrcpp::Any visitSet_password_statement(MySQLParser::Set_password_statementContext *context) = 0;

    virtual antlrcpp::Any visitUser_password_option(MySQLParser::User_password_optionContext *context) = 0;

    virtual antlrcpp::Any visitAuthByPassword(MySQLParser::AuthByPasswordContext *context) = 0;

    virtual antlrcpp::Any visitAuthByString(MySQLParser::AuthByStringContext *context) = 0;

    virtual antlrcpp::Any visitAuthByHash(MySQLParser::AuthByHashContext *context) = 0;

    virtual antlrcpp::Any visitTls_option(MySQLParser::Tls_optionContext *context) = 0;

    virtual antlrcpp::Any visitUser_resource_option(MySQLParser::User_resource_optionContext *context) = 0;

    virtual antlrcpp::Any visitUser_lock_option(MySQLParser::User_lock_optionContext *context) = 0;

    virtual antlrcpp::Any visitPrivelege_clause(MySQLParser::Privelege_clauseContext *context) = 0;

    virtual antlrcpp::Any visitPrivilege(MySQLParser::PrivilegeContext *context) = 0;

    virtual antlrcpp::Any visitPrivilege_level(MySQLParser::Privilege_levelContext *context) = 0;

    virtual antlrcpp::Any visitSet_password_option(MySQLParser::Set_password_optionContext *context) = 0;

    virtual antlrcpp::Any visitAnalyze_table(MySQLParser::Analyze_tableContext *context) = 0;

    virtual antlrcpp::Any visitCheck_table(MySQLParser::Check_tableContext *context) = 0;

    virtual antlrcpp::Any visitChecksum_table(MySQLParser::Checksum_tableContext *context) = 0;

    virtual antlrcpp::Any visitOptimize_table(MySQLParser::Optimize_tableContext *context) = 0;

    virtual antlrcpp::Any visitRepair_table(MySQLParser::Repair_tableContext *context) = 0;

    virtual antlrcpp::Any visitCheck_table_option(MySQLParser::Check_table_optionContext *context) = 0;

    virtual antlrcpp::Any visitCreate_udfunction(MySQLParser::Create_udfunctionContext *context) = 0;

    virtual antlrcpp::Any visitInstall_plugin(MySQLParser::Install_pluginContext *context) = 0;

    virtual antlrcpp::Any visitUninstall_plugin(MySQLParser::Uninstall_pluginContext *context) = 0;

    virtual antlrcpp::Any visitSetVariableAssignment(MySQLParser::SetVariableAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitSetCharset(MySQLParser::SetCharsetContext *context) = 0;

    virtual antlrcpp::Any visitSetNames(MySQLParser::SetNamesContext *context) = 0;

    virtual antlrcpp::Any visitSetPasswordStatement(MySQLParser::SetPasswordStatementContext *context) = 0;

    virtual antlrcpp::Any visitSetTransaction(MySQLParser::SetTransactionContext *context) = 0;

    virtual antlrcpp::Any visitSetAutocommit(MySQLParser::SetAutocommitContext *context) = 0;

    virtual antlrcpp::Any visitShowMasterlogs(MySQLParser::ShowMasterlogsContext *context) = 0;

    virtual antlrcpp::Any visitShowLogevents(MySQLParser::ShowLogeventsContext *context) = 0;

    virtual antlrcpp::Any visitShowObjWithFilter(MySQLParser::ShowObjWithFilterContext *context) = 0;

    virtual antlrcpp::Any visitShowColumns(MySQLParser::ShowColumnsContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateDb(MySQLParser::ShowCreateDbContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateFullidobj(MySQLParser::ShowCreateFullidobjContext *context) = 0;

    virtual antlrcpp::Any visitShowCreateUser(MySQLParser::ShowCreateUserContext *context) = 0;

    virtual antlrcpp::Any visitShowEngine(MySQLParser::ShowEngineContext *context) = 0;

    virtual antlrcpp::Any visitShowGlobalinfo(MySQLParser::ShowGlobalinfoContext *context) = 0;

    virtual antlrcpp::Any visitShowErrWarn(MySQLParser::ShowErrWarnContext *context) = 0;

    virtual antlrcpp::Any visitShowCountErrWarn(MySQLParser::ShowCountErrWarnContext *context) = 0;

    virtual antlrcpp::Any visitShowFromschemaFilter(MySQLParser::ShowFromschemaFilterContext *context) = 0;

    virtual antlrcpp::Any visitShowRoutinecode(MySQLParser::ShowRoutinecodeContext *context) = 0;

    virtual antlrcpp::Any visitShowGrants(MySQLParser::ShowGrantsContext *context) = 0;

    virtual antlrcpp::Any visitShowIndexes(MySQLParser::ShowIndexesContext *context) = 0;

    virtual antlrcpp::Any visitShowOpentables(MySQLParser::ShowOpentablesContext *context) = 0;

    virtual antlrcpp::Any visitShowProfile(MySQLParser::ShowProfileContext *context) = 0;

    virtual antlrcpp::Any visitShowSlavestatus(MySQLParser::ShowSlavestatusContext *context) = 0;

    virtual antlrcpp::Any visitVariable_clause(MySQLParser::Variable_clauseContext *context) = 0;

    virtual antlrcpp::Any visitShow_filter(MySQLParser::Show_filterContext *context) = 0;

    virtual antlrcpp::Any visitShow_profile_type(MySQLParser::Show_profile_typeContext *context) = 0;

    virtual antlrcpp::Any visitBinlog_statement(MySQLParser::Binlog_statementContext *context) = 0;

    virtual antlrcpp::Any visitCache_index_statement(MySQLParser::Cache_index_statementContext *context) = 0;

    virtual antlrcpp::Any visitFlush_statement(MySQLParser::Flush_statementContext *context) = 0;

    virtual antlrcpp::Any visitKill_statement(MySQLParser::Kill_statementContext *context) = 0;

    virtual antlrcpp::Any visitLoad_index_into_cache(MySQLParser::Load_index_into_cacheContext *context) = 0;

    virtual antlrcpp::Any visitReset_statement(MySQLParser::Reset_statementContext *context) = 0;

    virtual antlrcpp::Any visitShutdown_statement(MySQLParser::Shutdown_statementContext *context) = 0;

    virtual antlrcpp::Any visitTbl_index_list(MySQLParser::Tbl_index_listContext *context) = 0;

    virtual antlrcpp::Any visitFlush_option(MySQLParser::Flush_optionContext *context) = 0;

    virtual antlrcpp::Any visitLoad_tbl_index_list(MySQLParser::Load_tbl_index_listContext *context) = 0;

    virtual antlrcpp::Any visitSimple_describe_statement(MySQLParser::Simple_describe_statementContext *context) = 0;

    virtual antlrcpp::Any visitFull_describe_statement(MySQLParser::Full_describe_statementContext *context) = 0;

    virtual antlrcpp::Any visitHelp_statement(MySQLParser::Help_statementContext *context) = 0;

    virtual antlrcpp::Any visitUse_statement(MySQLParser::Use_statementContext *context) = 0;

    virtual antlrcpp::Any visitDescstmtDescObj(MySQLParser::DescstmtDescObjContext *context) = 0;

    virtual antlrcpp::Any visitConnectionDescObj(MySQLParser::ConnectionDescObjContext *context) = 0;

    virtual antlrcpp::Any visitTable_name(MySQLParser::Table_nameContext *context) = 0;

    virtual antlrcpp::Any visitFull_id(MySQLParser::Full_idContext *context) = 0;

    virtual antlrcpp::Any visitFull_column_name(MySQLParser::Full_column_nameContext *context) = 0;

    virtual antlrcpp::Any visitIndex_col_name(MySQLParser::Index_col_nameContext *context) = 0;

    virtual antlrcpp::Any visitUser_name(MySQLParser::User_nameContext *context) = 0;

    virtual antlrcpp::Any visitMysql_variable(MySQLParser::Mysql_variableContext *context) = 0;

    virtual antlrcpp::Any visitCharset_name(MySQLParser::Charset_nameContext *context) = 0;

    virtual antlrcpp::Any visitCollation_name(MySQLParser::Collation_nameContext *context) = 0;

    virtual antlrcpp::Any visitEngine_name(MySQLParser::Engine_nameContext *context) = 0;

    virtual antlrcpp::Any visitUuid_set(MySQLParser::Uuid_setContext *context) = 0;

    virtual antlrcpp::Any visitXid(MySQLParser::XidContext *context) = 0;

    virtual antlrcpp::Any visitXid_string_id(MySQLParser::Xid_string_idContext *context) = 0;

    virtual antlrcpp::Any visitAuth_plugin(MySQLParser::Auth_pluginContext *context) = 0;

    virtual antlrcpp::Any visitId_(MySQLParser::Id_Context *context) = 0;

    virtual antlrcpp::Any visitSimple_id(MySQLParser::Simple_idContext *context) = 0;

    virtual antlrcpp::Any visitDot_ext_id(MySQLParser::Dot_ext_idContext *context) = 0;

    virtual antlrcpp::Any visitDecimal_literal(MySQLParser::Decimal_literalContext *context) = 0;

    virtual antlrcpp::Any visitFilesize_literal(MySQLParser::Filesize_literalContext *context) = 0;

    virtual antlrcpp::Any visitString_literal(MySQLParser::String_literalContext *context) = 0;

    virtual antlrcpp::Any visitBoolean_literal(MySQLParser::Boolean_literalContext *context) = 0;

    virtual antlrcpp::Any visitHexadecimal_literal(MySQLParser::Hexadecimal_literalContext *context) = 0;

    virtual antlrcpp::Any visitNull_notnull(MySQLParser::Null_notnullContext *context) = 0;

    virtual antlrcpp::Any visitConstant(MySQLParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitCharDatatype(MySQLParser::CharDatatypeContext *context) = 0;

    virtual antlrcpp::Any visitDimensionDatatype(MySQLParser::DimensionDatatypeContext *context) = 0;

    virtual antlrcpp::Any visitSimpleDatatype(MySQLParser::SimpleDatatypeContext *context) = 0;

    virtual antlrcpp::Any visitCollectCharDatatype(MySQLParser::CollectCharDatatypeContext *context) = 0;

    virtual antlrcpp::Any visitSpatialDatatype(MySQLParser::SpatialDatatypeContext *context) = 0;

    virtual antlrcpp::Any visitData_type_to_convert(MySQLParser::Data_type_to_convertContext *context) = 0;

    virtual antlrcpp::Any visitSpatial_data_type(MySQLParser::Spatial_data_typeContext *context) = 0;

    virtual antlrcpp::Any visitLength_one_dimension(MySQLParser::Length_one_dimensionContext *context) = 0;

    virtual antlrcpp::Any visitLength_two_dimension(MySQLParser::Length_two_dimensionContext *context) = 0;

    virtual antlrcpp::Any visitLength_two_optional_dimension(MySQLParser::Length_two_optional_dimensionContext *context) = 0;

    virtual antlrcpp::Any visitId_list(MySQLParser::Id_listContext *context) = 0;

    virtual antlrcpp::Any visitTable_list(MySQLParser::Table_listContext *context) = 0;

    virtual antlrcpp::Any visitTable_pair_list(MySQLParser::Table_pair_listContext *context) = 0;

    virtual antlrcpp::Any visitIndex_colname_list(MySQLParser::Index_colname_listContext *context) = 0;

    virtual antlrcpp::Any visitExpression_list(MySQLParser::Expression_listContext *context) = 0;

    virtual antlrcpp::Any visitConstant_list(MySQLParser::Constant_listContext *context) = 0;

    virtual antlrcpp::Any visitSimple_string_list(MySQLParser::Simple_string_listContext *context) = 0;

    virtual antlrcpp::Any visitUser_var_list(MySQLParser::User_var_listContext *context) = 0;

    virtual antlrcpp::Any visitDefault_value(MySQLParser::Default_valueContext *context) = 0;

    virtual antlrcpp::Any visitIf_exists(MySQLParser::If_existsContext *context) = 0;

    virtual antlrcpp::Any visitIf_not_exists(MySQLParser::If_not_existsContext *context) = 0;

    virtual antlrcpp::Any visitSpecificFunctionCall(MySQLParser::SpecificFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitAggregateFunctionCall(MySQLParser::AggregateFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitScalarFunctionCall(MySQLParser::ScalarFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitUdfFunctionCall(MySQLParser::UdfFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitSimpleSpecificFCall(MySQLParser::SimpleSpecificFCallContext *context) = 0;

    virtual antlrcpp::Any visitConvertDataTypeFCall(MySQLParser::ConvertDataTypeFCallContext *context) = 0;

    virtual antlrcpp::Any visitValuesFCall(MySQLParser::ValuesFCallContext *context) = 0;

    virtual antlrcpp::Any visitCaseFCall(MySQLParser::CaseFCallContext *context) = 0;

    virtual antlrcpp::Any visitCharFCall(MySQLParser::CharFCallContext *context) = 0;

    virtual antlrcpp::Any visitPositionFCall(MySQLParser::PositionFCallContext *context) = 0;

    virtual antlrcpp::Any visitSubstrFCall(MySQLParser::SubstrFCallContext *context) = 0;

    virtual antlrcpp::Any visitTrimFCall(MySQLParser::TrimFCallContext *context) = 0;

    virtual antlrcpp::Any visitWeightFCall(MySQLParser::WeightFCallContext *context) = 0;

    virtual antlrcpp::Any visitExtractFCall(MySQLParser::ExtractFCallContext *context) = 0;

    virtual antlrcpp::Any visitGetFormatFCall(MySQLParser::GetFormatFCallContext *context) = 0;

    virtual antlrcpp::Any visitLevelWeightFList(MySQLParser::LevelWeightFListContext *context) = 0;

    virtual antlrcpp::Any visitLevelWeightFRange(MySQLParser::LevelWeightFRangeContext *context) = 0;

    virtual antlrcpp::Any visitAggregate_windowed_function(MySQLParser::Aggregate_windowed_functionContext *context) = 0;

    virtual antlrcpp::Any visitScalar_function_name(MySQLParser::Scalar_function_nameContext *context) = 0;

    virtual antlrcpp::Any visitFunction_args(MySQLParser::Function_argsContext *context) = 0;

    virtual antlrcpp::Any visitFunction_arg(MySQLParser::Function_argContext *context) = 0;

    virtual antlrcpp::Any visitIsExpression(MySQLParser::IsExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNotExpression(MySQLParser::NotExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalExpression(MySQLParser::LogicalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPredicateExpression(MySQLParser::PredicateExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSoundsLikePredicate(MySQLParser::SoundsLikePredicateContext *context) = 0;

    virtual antlrcpp::Any visitExpressionAtomPredicate(MySQLParser::ExpressionAtomPredicateContext *context) = 0;

    virtual antlrcpp::Any visitInPredicate(MySQLParser::InPredicateContext *context) = 0;

    virtual antlrcpp::Any visitSubqueryComparasionPredicate(MySQLParser::SubqueryComparasionPredicateContext *context) = 0;

    virtual antlrcpp::Any visitBetweenPredicate(MySQLParser::BetweenPredicateContext *context) = 0;

    virtual antlrcpp::Any visitBinaryComparasionPredicate(MySQLParser::BinaryComparasionPredicateContext *context) = 0;

    virtual antlrcpp::Any visitIsNullPredicate(MySQLParser::IsNullPredicateContext *context) = 0;

    virtual antlrcpp::Any visitLikePredicate(MySQLParser::LikePredicateContext *context) = 0;

    virtual antlrcpp::Any visitRegexpPredicate(MySQLParser::RegexpPredicateContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpressionAtom(MySQLParser::UnaryExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitExistsExpessionAtom(MySQLParser::ExistsExpessionAtomContext *context) = 0;

    virtual antlrcpp::Any visitConstantExpressionAtom(MySQLParser::ConstantExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallExpressionAtom(MySQLParser::FunctionCallExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitMysqlVariableExpressionAtom(MySQLParser::MysqlVariableExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitBinaryExpressionAtom(MySQLParser::BinaryExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitFullColumnNameExpressionAtom(MySQLParser::FullColumnNameExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitDefaultExpressionAtom(MySQLParser::DefaultExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitBitExpressionAtom(MySQLParser::BitExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitNestedExpressionAtom(MySQLParser::NestedExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitMathExpressionAtom(MySQLParser::MathExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitIntervalExpressionAtom(MySQLParser::IntervalExpressionAtomContext *context) = 0;

    virtual antlrcpp::Any visitUnary_operator(MySQLParser::Unary_operatorContext *context) = 0;

    virtual antlrcpp::Any visitComparison_operator(MySQLParser::Comparison_operatorContext *context) = 0;

    virtual antlrcpp::Any visitLogical_operator(MySQLParser::Logical_operatorContext *context) = 0;

    virtual antlrcpp::Any visitBit_operator(MySQLParser::Bit_operatorContext *context) = 0;

    virtual antlrcpp::Any visitMath_operator(MySQLParser::Math_operatorContext *context) = 0;

    virtual antlrcpp::Any visitCharset_name_base(MySQLParser::Charset_name_baseContext *context) = 0;

    virtual antlrcpp::Any visitTransaction_level_base(MySQLParser::Transaction_level_baseContext *context) = 0;

    virtual antlrcpp::Any visitPrivileges_base(MySQLParser::Privileges_baseContext *context) = 0;

    virtual antlrcpp::Any visitInterval_type_base(MySQLParser::Interval_type_baseContext *context) = 0;

    virtual antlrcpp::Any visitData_type_base(MySQLParser::Data_type_baseContext *context) = 0;

    virtual antlrcpp::Any visitKeywords_can_be_id(MySQLParser::Keywords_can_be_idContext *context) = 0;

    virtual antlrcpp::Any visitFunction_name_base(MySQLParser::Function_name_baseContext *context) = 0;


};

}  // namespace parser


void FUN_006bfe96(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Load size is inaccurate */
  ExceptionList = *ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x006bfec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


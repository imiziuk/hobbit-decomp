
void FUN_006cd3f2(void)

{
  FUN_006cda7f("kernel32.dll","FreeEnvironmentStringsW",&PTR_FUN_0075b2c8,DAT_008160f0,&LAB_006cdbfc
              );
                    /* WARNING: Could not recover jumptable at 0x006cd411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_0075b2c8)();
  return;
}


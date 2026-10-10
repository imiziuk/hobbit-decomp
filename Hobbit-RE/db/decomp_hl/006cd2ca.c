
void FUN_006cd2ca(void)

{
  FUN_006cda7f("user32.dll","SetWindowLongA",&PTR_FUN_0075b2f8,DAT_00816110,
               FID_conflict__GodotFailFindResourceW_12);
                    /* WARNING: Could not recover jumptable at 0x006cd2e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_0075b2f8)();
  return;
}


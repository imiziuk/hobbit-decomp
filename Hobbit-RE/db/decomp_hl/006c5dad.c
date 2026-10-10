
void FUN_006c5dad(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_006c5643();
    *puVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    puVar1 = (undefined4 *)FUN_006c5643();
    *puVar1 = 0x22;
    return;
  }
  return;
}


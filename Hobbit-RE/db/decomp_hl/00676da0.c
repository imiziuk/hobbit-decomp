
int __thiscall FUN_00676da0(int param_1,byte param_2)

{
  if ((param_2 & 2) != 0) {
    FUN_006c026a(param_1,0x50,*(undefined4 *)(param_1 + -4),FUN_00676ec0);
    if ((param_2 & 1) != 0) {
      FUN_006bf840(param_1 + -4);
    }
    return param_1 + -4;
  }
  FUN_00676ec0();
  if ((param_2 & 1) != 0) {
    FUN_006bf840(param_1);
  }
  return param_1;
}


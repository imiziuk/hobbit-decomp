
void FUN_004a67b0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  switch(param_1) {
  case 0x11:
    iVar1 = 2;
    break;
  default:
    goto switchD_004a67c9_caseD_12;
  case 0x1a:
  case 0x1b:
  case 0x1f:
  case 0x23:
    iVar1 = 0;
    break;
  case 0x24:
  case 0x25:
    iVar1 = 8;
    break;
  case 0x26:
  case 0x36:
    iVar1 = 1;
    break;
  case 0x27:
    iVar1 = 4;
    break;
  case 0x28:
    iVar1 = 5;
    break;
  case 0x29:
    iVar1 = 6;
    break;
  case 0x2c:
  case 0x2d:
    iVar1 = 3;
    break;
  case 0x2e:
  case 0x30:
    iVar1 = 7;
    break;
  case 0x35:
    iVar1 = 9;
  }
  if ((&PTR_s_StingImpactFlesh_0072a610)[param_3 + iVar1 * 0x12] != (undefined *)0x0) {
    FUN_00659630((&PTR_s_StingImpactFlesh_0072a610)[param_3 + iVar1 * 0x12],param_2,1);
  }
switchD_004a67c9_caseD_12:
  if ((param_1 == 0x37) && (param_3 == 0xb)) {
    DAT_0075d2b4 = FUN_00659600(s_Smaug_09_39_0072b278,1);
  }
  return;
}


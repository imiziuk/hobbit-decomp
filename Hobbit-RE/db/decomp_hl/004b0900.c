
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004b0900(int param_1,float *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 local_24 [36];
  
  if (*(short *)(param_1 + 0x168) == 0) {
    switch(*(undefined2 *)(param_1 + 0x16c)) {
    case 1:
      pcVar4 = s_silverPenny_0072bb74;
      break;
    default:
      pcVar4 = s_GlowBasic_0072bb54;
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      pcVar4 = s_GlowCP_0072bb60;
      break;
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
      pcVar4 = s_ScrollGlow_0072bb68;
      break;
    case 0x94:
      pcVar4 = s_Arkenstone_00722758;
    }
    FUN_00647d70(local_24,pcVar4,0x20);
    uVar3 = FUN_0054bad0(0x2d,0,0);
    piVar2 = (int *)FUN_004021c0(uVar3);
    if (piVar2 == (int *)0x0) {
      *(undefined2 *)(param_1 + 0x168) = 0;
      FUN_004b0900(param_2);
      if (*(short *)(param_1 + 0x168) == -1) {
        piVar2 = (int *)0x0;
      }
      else {
        uVar1 = *(uint *)(DAT_0076f648 + *(short *)(param_1 + 0x168) * 0x14);
        if (uVar1 == 0) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
        }
      }
    }
    *(short *)(param_1 + 0x168) = (short)piVar2[0x1e];
    *(byte *)((int)piVar2 + 0x7f) = *(byte *)((int)piVar2 + 0x7f) & 0xfd ^ 2;
    FUN_00488c30(local_24);
    (**(code **)(*piVar2 + 0x104))(0xffffffff);
    if (_DAT_006ee2f0 < param_2[3] - *param_2) {
      FUN_00404870(0x41100000,0x41900000,0x41100000);
    }
    (**(code **)(*piVar2 + 0x110))();
  }
  return 1;
}


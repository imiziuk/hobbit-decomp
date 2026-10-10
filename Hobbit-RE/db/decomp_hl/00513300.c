
void __fastcall FUN_00513300(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iStack_8;
  int iStack_4;
  
  iVar1 = 0;
  iStack_4 = 0;
  iVar3 = 0;
  iStack_8 = 0x1a0;
  do {
    if (*(int *)(param_1 + 0x1f60) <= iVar1) break;
    iVar4 = 0;
    do {
      if (*(int *)(param_1 + 0x1f60) <= iVar1) break;
      switch(*(undefined4 *)(param_1 + (iStack_8 + iVar4) * 4)) {
      case 0:
        uVar2 = 0x32;
        iVar1 = 0x38;
        break;
      case 1:
        uVar2 = 0x33;
        iVar1 = 0x39;
        break;
      case 2:
        uVar2 = 0x34;
        iVar1 = 0x3a;
        break;
      case 3:
        uVar2 = 0x35;
        iVar1 = 0x3b;
        break;
      case 4:
        uVar2 = 0x30;
        iVar1 = 0x36;
        break;
      case 5:
        uVar2 = 0x31;
        iVar1 = 0x37;
        break;
      case 6:
        uVar2 = 1;
        iVar1 = 2;
        break;
      case 7:
        uVar2 = 4;
        iVar1 = 5;
        break;
      case 8:
        uVar2 = 7;
        iVar1 = 8;
        break;
      case 9:
        uVar2 = 0xd;
        iVar1 = 0xe;
        break;
      case 10:
        uVar2 = 0x10;
        iVar1 = 0x11;
        break;
      case 0xb:
        uVar2 = 0x16;
        iVar1 = 0x17;
        break;
      case 0xc:
        uVar2 = 0x18;
        iVar1 = 0x19;
        break;
      case 0xd:
        uVar2 = 0x13;
        iVar1 = 0x14;
        break;
      case 0xe:
        uVar2 = 0x1b;
        iVar1 = 0x1c;
        break;
      case 0xf:
        uVar2 = 0x1e;
        iVar1 = 0x1f;
        break;
      case 0x10:
        uVar2 = 0x21;
        iVar1 = 0x22;
        break;
      case 0x11:
        uVar2 = 0x3e;
        iVar1 = 0x3f;
        break;
      case 0x12:
        uVar2 = 0x40;
        iVar1 = 0x41;
        break;
      case 0x13:
        uVar2 = 0x26;
        iVar1 = 0x27;
        break;
      case 0x14:
        uVar2 = 0x4c;
        iVar1 = 0x4d;
        break;
      case 0x15:
        uVar2 = 0x44;
        iVar1 = 0x45;
        break;
      case 0x16:
        uVar2 = 0x48;
        iVar1 = 0x49;
        break;
      case 0x17:
        uVar2 = 0x46;
        iVar1 = 0x47;
        break;
      case 0x18:
        uVar2 = 0x42;
        iVar1 = 0x43;
        break;
      case 0x19:
        uVar2 = 0x2c;
        iVar1 = 0x2e;
        break;
      case 0x1a:
        uVar2 = 0x2d;
        iVar1 = 0x2f;
        break;
      default:
        goto switchD_0051334e_default;
      }
      FUN_0042b110(uVar2,*(undefined4 *)(param_1 + (iVar4 + 0x86 + iVar3) * 0xc));
      if (iVar1 != 0x56) {
        FUN_0042b110(iVar1,*(undefined4 *)(param_1 + 0x64c + (iVar4 + iVar3) * 0xc));
      }
switchD_0051334e_default:
      iVar1 = iStack_4 + 1;
      iVar4 = iVar4 + 1;
      iStack_4 = iVar1;
    } while (iVar4 < 5);
    iStack_8 = iStack_8 + 0x13b;
    iVar3 = iVar3 + 0x69;
  } while (iStack_8 < 0x902);
  FUN_0042b070();
  FUN_00429100();
  return;
}



void __fastcall FUN_00439a60(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x964);
  iVar3 = 8;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  *(int *)(param_1 + 0x964) = -iVar1;
  while( true ) {
    if ((*(int *)(param_1 + 0x8d8) != *(int *)(param_1 + 0x8d4)) || (*(int *)(param_1 + 0x9b4) != 0)
       ) {
      switch(*(int *)(param_1 + 0x8d4)) {
      case 0:
        FUN_00429100();
        break;
      case 1:
        FUN_0043b110();
        break;
      case 2:
        FUN_00429100();
        break;
      case 3:
        FUN_0043cd70();
        break;
      case 4:
        FUN_00429100();
        break;
      case 5:
        FUN_0043e0a0();
        break;
      case 6:
        FUN_0043e880();
        break;
      case 7:
        FUN_00429100();
        break;
      case 8:
        FUN_00429100();
        break;
      case 9:
        FUN_0043f910();
        break;
      case 10:
        FUN_0043fb50();
        break;
      case 0xb:
        FUN_0042e070();
        break;
      case 0xc:
        FUN_0042ec20();
        break;
      case 0xd:
        FUN_0042eed0();
        break;
      case 0xe:
        FUN_00429100();
        break;
      case 0xf:
        FUN_004404d0();
        break;
      case 0x10:
        FUN_004287e0();
        break;
      case 0x11:
        FUN_00429100();
        break;
      case 0x12:
        FUN_00429100();
        break;
      case 0x13:
        FUN_00429100();
        break;
      case 0x14:
        FUN_00429c50();
        break;
      case 0x15:
        FUN_00440b70();
        break;
      case 0x16:
        FUN_00429100();
        break;
      case 0x17:
        FUN_0042a030();
        break;
      case 0x18:
        FUN_00429100();
        break;
      case 0x19:
        FUN_00429100();
        break;
      case 0x1a:
        FUN_00440f70();
        break;
      case 0x1b:
        FUN_00441300();
        break;
      case 0x1c:
        FUN_00439490();
        break;
      case 0x1d:
        FUN_00439770();
        break;
      case 0x1e:
        FUN_00441880();
        break;
      case 0x1f:
        FUN_00441e30();
        break;
      case 0x20:
        FUN_00429100();
        break;
      case 0x21:
        FUN_00442270();
        break;
      case 0x22:
        FUN_00429100();
        break;
      case 0x23:
        FUN_0044c080();
        break;
      case 0x24:
        FUN_00429100();
        break;
      case 0x25:
        FUN_004497b0();
        break;
      case 0x26:
        FUN_00429100();
        break;
      case 0x27:
        FUN_00429100();
        break;
      case 0x28:
        FUN_00432140();
        break;
      case 0x29:
        FUN_00429100();
        break;
      case 0x2a:
        FUN_0043b5d0();
        break;
      case 0x2b:
        FUN_00441300();
      }
      FUN_0044c360();
      puVar2 = (undefined4 *)(param_1 + 0x918);
      iVar1 = 0xf;
      do {
        *puVar2 = puVar2[-1];
        puVar2[0x12] = puVar2[0x11];
        puVar2[0x22] = puVar2[0x21];
        puVar2 = puVar2 + -1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      *(undefined4 *)(param_1 + 0x8dc) = *(undefined4 *)(param_1 + 0x8d4);
      *(undefined4 *)(param_1 + 0x924) = *(undefined4 *)(param_1 + 0x9ac);
      *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0x9b0);
      *(undefined4 *)(param_1 + 0x8d4) = *(undefined4 *)(param_1 + 0x8d8);
      *(undefined4 *)(param_1 + 0x9ac) = *(undefined4 *)(param_1 + 0x9a4);
      *(undefined4 *)(param_1 + 0x9b0) = *(undefined4 *)(param_1 + 0x9a8);
      *(undefined4 *)(param_1 + 0x798) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x79c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x794) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x7b0) = 0x47c35000;
      switch(*(undefined4 *)(param_1 + 0x8d8)) {
      case 0:
        FUN_00429100();
        break;
      case 1:
        FUN_0043a6a0();
        break;
      case 2:
        FUN_0043ee60();
        break;
      case 3:
        FUN_0043b940();
        break;
      case 4:
        FUN_0043cdc0();
        break;
      case 5:
        FUN_0043d570();
        break;
      case 6:
        FUN_0043e180();
        break;
      case 7:
        FUN_0043e970();
        break;
      case 8:
        FUN_0043ef60();
        break;
      case 9:
        FUN_0043f1c0();
        break;
      case 10:
        FUN_0043f950();
        break;
      case 0xb:
        FUN_0042dd20();
        break;
      case 0xc:
        FUN_0042e0c0();
        break;
      case 0xd:
        FUN_0042ec70();
        break;
      case 0xe:
        FUN_0042ef70();
        break;
      case 0xf:
        FUN_0043fbd0();
        break;
      case 0x10:
        FUN_00427390();
        break;
      case 0x11:
        FUN_00428830();
        break;
      case 0x12:
        FUN_00428830();
        break;
      case 0x13:
        FUN_00429110();
        break;
      case 0x14:
        FUN_00429a60();
        break;
      case 0x15:
        FUN_00440530();
        break;
      case 0x16:
        FUN_004298d0();
        break;
      case 0x17:
        FUN_00429c60();
        break;
      case 0x18:
        FUN_0042a0d0();
        break;
      case 0x19:
        FUN_0042a280();
        break;
      case 0x1a:
        FUN_00440de0();
        break;
      case 0x1b:
        FUN_00441000();
        break;
      case 0x1c:
        FUN_004385d0();
        break;
      case 0x1d:
        FUN_00439500();
        break;
      case 0x1e:
        FUN_00441370();
        break;
      case 0x1f:
        FUN_004419d0();
        break;
      case 0x20:
        FUN_00442070();
        break;
      case 0x21:
        FUN_00442140();
        break;
      case 0x22:
        FUN_004422b0();
        break;
      case 0x23:
        FUN_0044b1b0();
        break;
      case 0x24:
        FUN_0042a550();
        break;
      case 0x25:
        FUN_00448ba0();
        break;
      case 0x26:
        FUN_0044c190();
        break;
      case 0x27:
        FUN_00441f70();
        break;
      case 0x28:
        FUN_004314f0();
        break;
      case 0x29:
        FUN_0044dfc0();
        break;
      case 0x2a:
        FUN_0043b130();
        break;
      case 0x2b:
        FUN_00441160();
      }
      FUN_0044c360();
      *(undefined4 *)(param_1 + 0x91c) = 0;
      *(undefined4 *)(param_1 + 0x9b4) = 0;
    }
    *(float *)(param_1 + 0x91c) = *(float *)(param_1 + 0x91c) + *(float *)(param_1 + 0x920);
    switch(*(undefined4 *)(param_1 + 0x8d4)) {
    case 0:
      FUN_00429100();
      break;
    case 1:
      FUN_0043a7e0();
      break;
    case 2:
      FUN_0043eec0();
      break;
    case 3:
      FUN_0043b970();
      break;
    case 4:
      FUN_0043cea0();
      break;
    case 5:
      FUN_0043d6b0();
      break;
    case 6:
      FUN_0043e250();
      break;
    case 7:
      FUN_0043ecc0();
      break;
    case 8:
      FUN_0043f070();
      break;
    case 9:
      FUN_0043f290();
      break;
    case 10:
      FUN_0043fa00();
      break;
    case 0xb:
      FUN_0042de50();
      break;
    case 0xc:
      FUN_0042e260();
      break;
    case 0xd:
      FUN_0042ed30();
      break;
    case 0xe:
      FUN_0042efc0();
      break;
    case 0xf:
      FUN_0043fcc0();
      break;
    case 0x10:
      FUN_004274b0();
      break;
    case 0x11:
      FUN_00428850();
      break;
    case 0x12:
      FUN_00428aa0();
      break;
    case 0x13:
      FUN_00429410();
      break;
    case 0x14:
      FUN_00429ae0();
      break;
    case 0x15:
      FUN_004405f0();
      break;
    case 0x16:
      FUN_004299e0();
      break;
    case 0x17:
      FUN_00429d00();
      break;
    case 0x18:
      FUN_0042a250();
      break;
    case 0x19:
      FUN_0042a520();
      break;
    case 0x1a:
      FUN_00440ec0();
      break;
    case 0x1b:
      FUN_00441060();
      break;
    case 0x1c:
      FUN_00438990();
      break;
    case 0x1d:
      FUN_004395b0();
      break;
    case 0x1e:
      FUN_00441450();
      break;
    case 0x1f:
      FUN_00441a80();
      break;
    case 0x20:
      FUN_00429100();
      break;
    case 0x21:
      FUN_00429100();
      break;
    case 0x22:
      FUN_00442320();
      break;
    case 0x23:
      FUN_0044b3b0();
      break;
    case 0x24:
      FUN_0042a5d0();
      break;
    case 0x25:
      FUN_00448d80();
      break;
    case 0x26:
      FUN_0044c250();
      break;
    case 0x27:
      FUN_00442040();
      break;
    case 0x28:
      FUN_004318d0();
      break;
    case 0x29:
      FUN_0044e030();
      break;
    case 0x2a:
      FUN_0043b180();
      break;
    case 0x2b:
      FUN_00441200();
    }
    FUN_0044c360();
    if (*(int *)(param_1 + 0x8d8) == *(int *)(param_1 + 0x8d4)) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      FUN_0043a390();
      FUN_0044ca80();
      FUN_00648600(param_1 + 0x600,0,0x128);
      iVar3 = 8;
    }
  }
  return;
}


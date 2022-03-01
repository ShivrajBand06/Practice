import javax.sound.midi.Soundbank;
import java.sql.SQLData;

interface TVremot{
    void nextCH();
    void prevCH();
    void Volup();
    void VolDown();
    default void Mute(){
        System.out.println(" Volume is 0...");
    }
}
interface SmartTVremot extends TVremot {
    void Netflix();
    void Prime();
}

class TV implements  SmartTVremot{
    @Override
    public void nextCH() {
        System.out.println("Next Channel....");
    }public void prevCH() {
        System.out.println("Prev Channel....");
    }
    public void Volup() {
        System.out.println("Increasing volume....");
    }
    public void VolDown() {
        System.out.println("Decreasing Volume....");
    }
    public void Netflix(){
        System.out.println("Opening NEtflix.....");
    }
    public void Prime(){
        System.out.println("Opening Amazon Prime.....");
    }
    void PowerOFF(){
        System.out.println("Switching off the TV");
    }
}
public class Interfacce_eg_2 {
    public static void main(String[] args) {
        TV Lg = new TV();
        Lg.nextCH();
        Lg.prevCH();
        Lg.Netflix();
        Lg.Prime();
        Lg.PowerOFF();
    }
}

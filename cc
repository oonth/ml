Src/test/java -> package(project) -> Class (Pro.java)
package project;
import org.openqa.selenium.By;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
public class pro {
public static class EdgeDriverSample {
public static void main(String[] args) throws Exception {
EdgeDriver driver = new EdgeDriver();
try {
driver.navigate().to("https://bing.com");
WebElement element = driver.findElement(By.id("sb_form_q"));
element.sendKeys("WebDriver");
element.submit();
Thread.sleep(9000);
} finally {
driver.quit();
}
}
}
}

Src/test/java -> package (testing) -> Final.java

package testng;
import org.testng.annotations.Test;

public class Final {
@Test(priority=2)
void openBrowser()
{
System.out.println("Open Browser");
}
@Test(priority=3)
void login()
{
System.out.println("Login to application");
}
@Test(priority=1)
void close()
{
System.out.println("Close Browser");
}
}

Src/test/java -> package (testing) -> class( loginWithTestNG.java)

package testng;
import java.time.Duration;
import org.openqa.selenium.By;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import org.testng.annotations.Test;
public class loginWithTestNG {
EdgeDriver driver;
@Test(priority=2)
void openBrowser()
{
EdgeDriver driver = new EdgeDriver();

driver.manage().timeouts().implicitlyWait(Duration.ofSeconds(2));
try {
driver.navigate().to("https://bing.com");
WebElement element = driver.findElement(By.id("sb_form_q"));
element.sendKeys("WebDriver");
element.submit();
try {

Thread.sleep(9000);
} catch (InterruptedException e) {
// TODO Auto-generated catch block
e.printStackTrace();
}
} finally {
driver.quit();
}
System.out.println("Open Browser");
}

}

Src/test/java -> package (websites) -> class (Entertainment.java)

package webSites;
import java.time.Duration;
import org.openqa.selenium.By;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import org.testng.annotations.Test;
public class Entertainment {

EdgeDriver driver;
@Test

void openBrowser()
{
EdgeDriver driver = new EdgeDriver();
driver.manage().timeouts().implicitlyWait(Duration.ofSeconds(2
));
try {

driver.navigate().to("https://www.google.com/");
WebElement element = driver.findElement(By.cssSelector("#APjFqb.gLFyf"));
element.sendKeys("entertainment");
element.submit();

try {

Thread.sleep(9000);
} catch (InterruptedException e) {
// TODO Auto-generated catch block
e.printStackTrace();
}
} finally {
driver.quit();
}
System.out.println("Open Browser");
}

}

Src/test/java -> package (websites) -> class (Sports.java)

package webSites;
import org.openqa.selenium.By;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import org.testng.annotations.Test;

public class Sports {

EdgeDriver driver;
@Test
void openBrowser()
{

EdgeDriver driver = new EdgeDriver();
try {
driver.navigate().to("https://bing.com");

WebElement element =

driver.findElement(By.id("sb_form_q"));

element.sendKeys("sports");
element.submit();
try {

Thread.sleep(9000);
} catch (InterruptedException e) {
// TODO Auto-generated catch block
e.printStackTrace();
}
} finally {
driver.quit();
}
System.out.println("Open Browser");
}

}
